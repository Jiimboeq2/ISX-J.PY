#pragma once

class py_eq2_actor : public py_lsobject
{
public:
	py_eq2_actor();
	~py_eq2_actor();
	explicit py_eq2_actor(const unsigned int& actor_id);
	explicit py_eq2_actor(const std::string& query);
	py_eq2_actor(const py_eq2_actor& other);
	py_eq2_actor(py_eq2_actor&& other) noexcept;	
	py_eq2_actor(const LSOBJECT& other);
	py_eq2_actor& operator=(const py_eq2_actor& other);
	py_eq2_actor& operator=(py_eq2_actor&& other) noexcept;
	virtual bool check_collision(const float& to_x = NULL, const float& to_y = NULL, const float& to_z = NULL);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(check_collision_overloads, check_collision, 0, 3)
	std::string get_aura();	
	bool get_can_turn();
	std::string get_class();
	float get_collision_radius();
	float get_collision_scale();
	std::string get_con_color(const bool& as_rgb = false);
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(get_con_color_overloads, get_con_color, 0, 1);
	std::string get_current_animation();
	int get_difficulty();
	float get_distance();
	float get_distance2d();
	int get_effective_level();
	int get_encounter_size();
	int get_faction();
	std::string get_faction_standing();
	bool get_flying_using_mount();
	std::string get_gender();
	std::string get_guild();
	float get_heading();
	float get_heading_to();
	std::string get_heading_to_as_compass_bearing();
	int get_health();
	unsigned int get_id();
	bool get_in_combat_mode();
	bool get_in_my_group();
	bool get_interactable();
	bool get_is_aggro();
	bool get_is_afk();
	bool get_is_a_pet();
	bool get_is_backing_up();
	bool get_is_banker();
	bool get_is_camping();
	bool get_is_chest();
	bool get_is_climbing();
	bool get_is_crouching();
	bool get_is_dead();
	bool get_is_epic();
	bool get_is_encounter_broken();	
	bool get_is_falling();
	bool get_is_fd();
	bool get_is_heroic();
	bool get_is_idle();
	bool get_is_in_same_encounter(const unsigned int& actor_id);
	bool get_is_invis();
	bool get_is_jumping();
	bool get_is_lfg();
	bool get_is_lfw();
	bool get_is_linkdead();
	bool get_is_locked();	
	bool get_is_merchant();
	bool get_is_my_pet();
	bool get_is_named();
	bool get_is_on_carpet();
	bool get_is_on_griffin();
	bool get_is_on_horse();
	bool get_is_rooted();
	bool get_is_running();
	bool get_is_sitting();
	bool get_is_solo();
	bool get_is_sprinting();
	bool get_is_strafing_left();
	bool get_is_strafing_right();
	bool get_is_swimming();
	bool get_is_walking();
	std::string get_last_name();
	int get_level();
	py_point3_f get_loc();
	std::string get_mood();
	std::string get_name();
	int get_num_effects();
	bool get_on_flying_mount();
	std::string get_overlay();
	py_eq2_actor get_pet();
	int get_power();
	std::string get_race();
	int get_raid_size();
	float get_speed();
	std::string get_suffix_title();
	float get_swimming_speed_mod();
	std::string get_tag_target_icon();
	std::string get_tag_target_number();
	py_eq2_actor get_target();
	float get_target_ring_radius();
	int get_threat_to_me();
	int get_threat_to_pet();
	int get_threat_to_next();
	unsigned int get_tint_flags();
	std::string get_type();
	py_point3_f get_velocity();
	std::string get_visual_variant();
	std::string get_who_following();
	int get_who_following_id();
	float get_x();
	float get_y();
	float get_z();
	int get_effects(boost::python::list& effect_list);
	void double_click();
	void waypoint_to();
	void do_face();
	void do_target();
	void location(const bool& add_location = true, const std::string& notes = std::string());
	BOOST_PYTHON_MEMBER_FUNCTION_OVERLOADS(location_overloads, location, 0, 2)
	void request_effects_info();
	static py_eq2_actor from_id(const unsigned int& actor_id);
	static py_eq2_actor from_query(const std::string& query);
};