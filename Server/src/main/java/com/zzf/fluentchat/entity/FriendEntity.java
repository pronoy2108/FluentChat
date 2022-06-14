package com.zzf.fluentchat.entity;

import javax.persistence.*;

@Entity(name = "friend_info")
@Table(uniqueConstraints = {
        @UniqueConstraint(name = "uc_friend_user", columnNames = {"user_id", "friend_id"})
})
public class FriendEntity {

    public enum State {
        normal(0),
        pending(1),
        black(2);

        final int index;

        State(int index) {
            this.index = index;
        }
    }

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;

    @ManyToOne
    @JoinColumn(name = "user_id", nullable = false)
    private UserEntity user;

    @OneToOne
    @JoinColumn(name = "friend_id", nullable = false)
    private UserEntity friend;

    @Column(nullable = false)
    private String alias = "";

    @Column(nullable = false)
    private int state;

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public UserEntity getUser() {
        return user;
    }

    public void setUser(UserEntity user) {
        this.user = user;
    }

    public UserEntity getFriend() {
        return friend;
    }

    public void setFriend(UserEntity friend) {
        this.friend = friend;
    }

    public String getAlias() {
        return alias;
    }

    public void setAlias(String alias) {
        this.alias = alias;
    }

    public int getState() {
        return state;
    }

    public void setState(State state) {
        this.state = state.index;
    }

    public void setState(int state) {
        this.state = state;
    }
}