
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100041090(L2CWeaponInklingSplashbomb *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  L2CValue *pLVar10;
  void ***pppvVar11;
  L2CValue *pLVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  long lVar19;
  int in_stack_fffffffffffffc54;
  undefined in_stack_fffffffffffffc5c;
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  undefined auStack608 [16];
  undefined auStack592 [32];
  void **appvStack560 [2];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  void **local_190;
  lua_State *plStack392;
  L2CValue aLStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [32];
  void **appvStack304 [2];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  void **local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
  fVar14 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack128,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
  fVar14 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack144,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x17b0a637f6);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar13 = &this->moduleAccessor;
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack160,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x173700fcb5);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack176,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  fVar14 = (float)app::lua_bind::MotionModule__rate_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack192,fVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x1ce38cf74a);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack208,fVar14);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_EXPLODE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack224,_WEAPON_INKLING_SPLASHBOMB_STATUS_KIND_EXPLODE);
    lib::L2CValue::L2CValue(aLStack240,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    goto LAB_7100043568;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x108f20bc73);
    lib::L2CValue::L2CValue(aLStack256,0xbd93356be);
    uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar7 = lib::L2CValue::as_integer(aLStack256);
    fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar14);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue(aLStack256,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,100.0);
    lib::L2CValue::L2CValue(aLStack256,100.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  }
  lib::L2CValue::~L2CValue(aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
  uVar6 = lib::L2CValue::operator<(aLStack192,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  if ((uVar6 & 1) != 0) {
    fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
    uVar6 = lib::L2CValue::operator<((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((uVar6 & 1) != 0) {
      uVar4 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,uVar4);
      fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack256,fVar14);
      lib::L2CValue::operator+((L2CValue *)&local_70,aLStack256);
      fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
      app::lua_bind::MotionModule__set_frame_impl(*ppBVar13,fVar14,true);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x12b6018f2a);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar13,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack256,iVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,iVar3);
  uVar6 = lib::L2CValue::operator==((L2CValue *)&local_190,aLStack256);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack288,0x1757469c6e);
    lib::L2CValue::L2CValue((L2CValue *)appvStack304,0x31d39a761);
    HVar8 = lib::L2CValue::as_hash(aLStack288);
    HVar9 = lib::L2CValue::as_hash((L2CValue *)appvStack304);
    plStack392 = _FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SPECIAL_S;
    local_190 = FIGHTER_STATUS_KIND_SPECIAL_HI;
    local_70 = local_190;
    plStack104 = plStack392;
    uVar4 = app::lua_bind::EffectModule__req_follow_impl
                      (*ppBVar13,HVar8,HVar9,(Vector3f *)&local_190,(Vector3f *)&local_70,1.0,false,
                       0,0,-1,in_stack_fffffffffffffc54,0,(bool)in_stack_fffffffffffffc5c,false);
    lib::L2CValue::L2CValue(aLStack272,uVar4);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,0x168af4c5cf);
    HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_190);
    iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar13,HVar8,true,false,false,false,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)(auStack336 + 0x10));
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  }
  lib::L2CValue::L2CValue(aLStack288,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack288);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
  uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_70,(L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_190);
  lib::L2CValue::~L2CValue((L2CValue *)&local_70);
  lib::L2CValue::~L2CValue(aLStack288);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack288,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_HOP);
    iVar3 = lib::L2CValue::as_integer(aLStack288);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_190,true);
    uVar6 = lib::L2CValue::operator==((L2CValue *)&local_70,(L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    lib::L2CValue::~L2CValue(aLStack288);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_HOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar3);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      app::lua_bind::SearchModule__clear_all_impl(*ppBVar13);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_LANDING);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_190,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_DOWN);
      uVar4 = lib::L2CValue::as_integer(aLStack288);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
LAB_7100042158:
        lib::L2CValue::L2CValue(aLStack288,_GROUND_TOUCH_FLAG_LEFT_SIDE);
        uVar4 = lib::L2CValue::as_integer(aLStack288);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_70);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          uVar6 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) == 0) goto LAB_71000421bc;
LAB_7100042230:
          lib::L2CValue::~L2CValue((L2CValue *)&local_70);
          lib::L2CValue::~L2CValue(aLStack288);
LAB_7100042590:
          lib::L2CValue::L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue(aLStack288);
          lib::L2CValue::L2CValue((L2CValue *)appvStack304,_GROUND_TOUCH_FLAG_ALL);
          uVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack304);
          uVar18 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar13,uVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar18);
          lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar18 >> 0x20));
          lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
          lib::L2CValue::operator=(aLStack288,aLStack384);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          fVar15 = (float)lib::L2CValue::as_number(aLStack288);
          fVar16 = (float)lib::L2CValue::as_number(aLStack128);
          fVar17 = (float)lib::L2CValue::as_number(aLStack144);
          uVar18 = app::sv_math::vec2_reflection(fVar14,fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar18);
          lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar18 >> 0x20));
          lib::L2CValue::operator=(aLStack128,(L2CValue *)&local_190);
          lib::L2CValue::operator=(aLStack144,aLStack384);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::operator*(aLStack128,aLStack160);
          lib::L2CValue::operator*(aLStack144,aLStack176);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue((L2CValue *)auStack336);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::operator-(aLStack208);
          lib::L2CValue::operator*(aLStack192,(L2CValue *)appvStack304);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0x16fdf3f559);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_190);
          iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar13,HVar8,true,false,false,false,0)
          ;
          lib::L2CValue::L2CValue(aLStack864,iVar3);
          lib::L2CValue::~L2CValue(aLStack864);
          pppvVar11 = &local_190;
          goto LAB_7100043540;
        }
LAB_71000421bc:
        lib::L2CValue::L2CValue((L2CValue *)auStack336,_GROUND_TOUCH_FLAG_RIGHT_SIDE);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar4);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)appvStack304);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
            lib::L2CValue::~L2CValue((L2CValue *)auStack336);
            goto LAB_7100042230;
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack368,_GROUND_TOUCH_FLAG_UP_SIDE);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)auStack368);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar13,uVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)auStack352);
        if ((bVar2 & 1U) == 0) {
          uVar6 = 0;
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack144);
          uVar6 = uVar6 & 0xffffffff;
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        }
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((uVar6 & 1) != 0) goto LAB_7100042590;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
        uVar6 = lib::L2CValue::operator<(aLStack144,(L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
        lib::L2CValue::~L2CValue(aLStack288);
        if ((uVar6 & 1) == 0) goto LAB_7100042158;
        lib::L2CValue::L2CValue((L2CValue *)&local_70);
        lib::L2CValue::L2CValue(aLStack288);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,GROUND_TOUCH_FLAG_DOWN);
        uVar4 = lib::L2CValue::as_integer((L2CValue *)appvStack304);
        uVar18 = app::lua_bind::GroundModule__get_touch_normal_impl(*ppBVar13,uVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)&local_70,(L2CValue *)&local_190);
        lib::L2CValue::operator=(aLStack288,aLStack384);
        lib::L2CValue::~L2CValue(aLStack384);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
        fVar14 = (float)app::sv_kinetic_energy::get_speed_length(this->luaStateAgent);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,fVar14);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
        lib::L2CValue::L2CValue((L2CValue *)auStack352,0xeedb5f650);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        pLVar10 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)auStack352);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                  (*ppBVar13,uVar6,(ulong)pLVar10);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar14);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        pLVar12 = aLStack288;
        lib::L2CAgent::math_atan((L2CAgent *)&local_70,pLVar12,pLVar10);
        lib::L2CAgent::math_deg((L2CAgent *)auStack352,pLVar12);
        lib::L2CAgent::math_abs((L2CAgent *)auStack368,pLVar12);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
        lib::L2CValue::L2CValue(aLStack448,0x117e3ee065);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        uVar7 = lib::L2CValue::as_integer(aLStack448);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack432,fVar14);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
        lib::L2CValue::L2CValue(aLStack464,0x179af091be);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        uVar7 = lib::L2CValue::as_integer(aLStack464);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
        lib::L2CValue::L2CValue(aLStack448,fVar14);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        uVar6 = lib::L2CValue::operator<((L2CValue *)auStack336,(L2CValue *)appvStack304);
        if (((uVar6 & 1) == 0) &&
           (uVar6 = lib::L2CValue::operator<=(aLStack432,aLStack416), (uVar6 & 1) == 0)) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,
                     _WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_STOP_FRAME);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack464,fVar14);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          uVar6 = lib::L2CValue::operator<(aLStack464,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) != 0) {
            FUN_71000441c0(&local_190,*ppBVar13);
            lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          }
          fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
          lib::L2CValue::L2CValue(aLStack480,fVar14);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_RADIUS
                    );
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue(aLStack496,fVar14);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,2.0);
          lib::L2CValue::operator*
                    ((L2CValue *)&local_190,
                     (L2CValue *)&FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::operator*(aLStack528,aLStack496);
          lib::L2CValue::~L2CValue(aLStack528);
          uVar4 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar13);
          lib::L2CValue::L2CValue((L2CValue *)appvStack560,uVar4);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,720.0);
          lib::L2CValue::operator/((L2CValue *)appvStack560,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
          lib::L2CValue::operator*(aLStack512,aLStack528);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.5);
          lib::L2CValue::operator*((L2CValue *)(auStack592 + 0x10),(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
          lib::L2CValue::L2CValue((L2CValue *)&local_190,60.0);
          uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_190,aLStack464);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) == 0) {
LAB_71000429a8:
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
            uVar6 = lib::L2CValue::operator<=(aLStack464,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_190,30.0);
              uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack480);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,60.0);
                lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_190);
                goto LAB_7100042a10;
              }
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_190,30.0);
            uVar6 = lib::L2CValue::operator<(aLStack480,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            if ((uVar6 & 1) == 0) goto LAB_71000429a8;
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
            lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_190);
LAB_7100042a10:
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          }
          pLVar12 = aLStack464;
          lib::L2CValue::operator-(aLStack480,pLVar12);
          lib::L2CAgent::math_abs((L2CAgent *)auStack592,pLVar12);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)(auStack592 + 0x10),(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
          lib::L2CValue::~L2CValue((L2CValue *)auStack592);
          if ((uVar6 & 1) == 0) {
            uVar6 = lib::L2CValue::operator<(aLStack480,aLStack464);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
              fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar14);
              lib::L2CValue::operator*((L2CValue *)appvStack560,(L2CValue *)auStack592);
              lib::L2CValue::L2CValue((L2CValue *)auStack608,0.0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack608);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::~L2CValue((L2CValue *)auStack608);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
              lib::L2CValue::~L2CValue((L2CValue *)auStack592);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,-1.0);
              fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
              app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
            }
            else {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
              fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
              lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar14);
              lib::L2CValue::operator*((L2CValue *)appvStack560,(L2CValue *)auStack592);
              lib::L2CValue::L2CValue((L2CValue *)auStack608,0.0);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack608);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::~L2CValue((L2CValue *)auStack608);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
              lib::L2CValue::~L2CValue((L2CValue *)auStack592);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
              fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
              app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL)
            ;
            lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10),0.0);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack592);
            app::sv_kinetic_energy::set_speed(this->luaStateAgent);
            lib::L2CValue::~L2CValue((L2CValue *)auStack592);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL)
            ;
            lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10),0.0);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,0.0);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack592);
            app::sv_kinetic_energy::set_accel(this->luaStateAgent);
            lib::L2CValue::~L2CValue((L2CValue *)auStack592);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            fVar14 = (float)lib::L2CValue::as_number(aLStack464);
            app::lua_bind::MotionModule__set_frame_impl(*ppBVar13,fVar14,true);
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
            fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
            app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
          }
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          fVar14 = (float)app::lua_bind::PostureModule__rot_x_impl(*ppBVar13,0);
          lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10),fVar14);
          fVar14 = (float)app::lua_bind::PostureModule__rot_y_impl(*ppBVar13,0);
          lib::L2CValue::L2CValue((L2CValue *)auStack592,fVar14);
          fVar14 = (float)app::lua_bind::PostureModule__rot_z_impl(*ppBVar13,0);
          lib::L2CValue::L2CValue((L2CValue *)auStack608,fVar14);
          fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
          lib::L2CValue::L2CValue(aLStack656,fVar14);
          lib::L2CValue::operator*((L2CValue *)auStack368,aLStack656);
          lib::L2CValue::operator+((L2CValue *)(auStack592 + 0x10),aLStack640);
          uVar6 = lib::L2CValue::as_number(aLStack624);
          lVar19 = lib::L2CValue::as_number((L2CValue *)auStack592);
          uVar4 = lib::L2CValue::as_number((L2CValue *)auStack608);
          local_190 = (void **)(uVar6 & 0xffffffff | lVar19 << 0x20);
          plStack392 = (lua_State *)(ulong)uVar4;
          app::lua_bind::PostureModule__set_rot_impl(*ppBVar13,(Vector3f *)&local_190,0);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue(aLStack640);
          lib::L2CValue::~L2CValue(aLStack656);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,GROUND_CORRECT_KIND_GROUND);
          GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue(aLStack848,_SITUATION_KIND_GROUND);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xb0);
          lib::L2CValue::~L2CValue(aLStack848);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,false);
          bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_190);
          app::lua_bind::JostleModule__sleep_impl(*ppBVar13,(bool)(bVar1 & 1));
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_LANDING
                    );
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          lib::L2CValue::operator+(aLStack464,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,
                     _WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_STOP_FRAME);
          fVar14 = (float)lib::L2CValue::as_number(aLStack624);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue(aLStack624);
          lib::L2CValue::~L2CValue((L2CValue *)auStack608);
          lib::L2CValue::~L2CValue((L2CValue *)auStack592);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
          pppvVar11 = appvStack560;
        }
        else {
          lib::L2CValue::L2CValue(aLStack464,0);
          lib::L2CValue::L2CValue(aLStack480,0);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          fVar15 = (float)lib::L2CValue::as_number(aLStack288);
          fVar16 = (float)lib::L2CValue::as_number(aLStack128);
          fVar17 = (float)lib::L2CValue::as_number(aLStack144);
          uVar18 = app::sv_math::vec2_reflection(fVar14,fVar15,fVar16,fVar17);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,(float)uVar18);
          lib::L2CValue::L2CValue(aLStack384,(float)((ulong)uVar18 >> 0x20));
          lib::L2CValue::operator=(aLStack464,(L2CValue *)&local_190);
          lib::L2CValue::operator=(aLStack480,aLStack384);
          lib::L2CValue::~L2CValue(aLStack384);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::operator*(aLStack480,aLStack176);
          uVar6 = lib::L2CValue::operator<(aLStack496,aLStack448);
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::operator=(aLStack496,aLStack448);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::operator*(aLStack464,aLStack160);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack512);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack496);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue(aLStack512);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue(aLStack512,1);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
          uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack128);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) == 0) {
LAB_7100041e54:
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
            uVar6 = lib::L2CValue::operator<(aLStack128,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            if ((uVar6 & 1) != 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
              uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack464);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              if ((uVar6 & 1) != 0) goto LAB_7100041ea4;
            }
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
            uVar6 = lib::L2CValue::operator<(aLStack464,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
            if ((uVar6 & 1) == 0) goto LAB_7100041e54;
LAB_7100041ea4:
            lib::L2CValue::L2CValue((L2CValue *)&local_190,-1);
            lib::L2CValue::operator=(aLStack512,(L2CValue *)&local_190);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          }
          lib::L2CValue::operator*(aLStack192,aLStack208);
          lib::L2CValue::operator*(aLStack528,aLStack512);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue(aLStack528);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,GROUND_CORRECT_KIND_AIR);
          GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue(aLStack544,SITUATION_KIND_AIR);
          lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xe0);
          lib::L2CValue::~L2CValue(aLStack544);
          lib::L2CValue::L2CValue(aLStack528,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack528);
          fVar14 = (float)app::sv_kinetic_energy::get_speed_length(this->luaStateAgent);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar14);
          lib::L2CValue::operator=((L2CValue *)appvStack304,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue(aLStack528);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0x108f20bc73);
          lib::L2CValue::L2CValue((L2CValue *)appvStack560,0x7b9905530);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          uVar7 = lib::L2CValue::as_integer((L2CValue *)appvStack560);
          fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
          lib::L2CValue::L2CValue(aLStack528,fVar14);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::operator-((L2CValue *)appvStack304,aLStack528);
          uVar6 = lib::L2CValue::operator<=((L2CValue *)&local_190,(L2CValue *)auStack336);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          if ((uVar6 & 1) != 0) {
            uVar6 = lib::L2CValue::operator<=(aLStack432,aLStack416);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::operator-(aLStack496,aLStack528);
              lib::L2CValue::operator/((L2CValue *)&local_190,aLStack528);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
              lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10),fVar14);
              FUN_71000441c0(auStack592,*ppBVar13);
              lib::L2CValue::operator-((L2CValue *)auStack592,(L2CValue *)(auStack592 + 0x10));
              lib::L2CValue::L2CValue((L2CValue *)&local_190,2);
              lib::L2CValue::operator*((L2CValue *)appvStack560,(L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              pLVar12 = aLStack640;
              lib::L2CValue::operator/(aLStack624,pLVar12);
              lib::L2CValue::~L2CValue(aLStack640);
              lib::L2CValue::~L2CValue(aLStack624);
              lib::L2CAgent::math_abs((L2CAgent *)auStack608,pLVar12);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
              uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,aLStack624);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::~L2CValue(aLStack624);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
                uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,(L2CValue *)auStack608);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                if ((uVar6 & 1) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,-1.0);
                  lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)&local_190);
                }
                else {
                  lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
                  lib::L2CValue::operator=((L2CValue *)auStack608,(L2CValue *)&local_190);
                }
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                lib::L2CValue::operator-((L2CValue *)auStack592,(L2CValue *)(auStack592 + 0x10));
                lib::L2CValue::L2CValue((L2CValue *)&local_190,2.0);
                lib::L2CValue::operator*((L2CValue *)&local_190,(L2CValue *)auStack608);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                lib::L2CValue::operator/(aLStack640,aLStack656);
                lib::L2CValue::~L2CValue(aLStack656);
                lib::L2CValue::~L2CValue(aLStack640);
                lib::L2CValue::operator*(aLStack624,aLStack528);
                lib::L2CValue::operator+(aLStack640,aLStack528);
                lib::L2CValue::~L2CValue(aLStack640);
                lib::L2CValue::L2CValue(aLStack640,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
                lib::L2CValue::operator*(aLStack464,aLStack160);
                lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack640);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack656);
                lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
                app::sv_kinetic_energy::set_speed(this->luaStateAgent);
                lib::L2CValue::~L2CValue(aLStack656);
                lib::L2CValue::~L2CValue(aLStack640);
                lib::L2CValue::~L2CValue((L2CValue *)&local_190);
                lib::L2CValue::~L2CValue(aLStack624);
              }
              fVar14 = (float)lib::L2CValue::as_number((L2CValue *)auStack608);
              app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
              lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
              lib::L2CValue::operator+((L2CValue *)auStack592,(L2CValue *)&local_190);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_190,
                         _WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_STOP_FRAME);
              fVar14 = (float)lib::L2CValue::as_number(aLStack624);
              iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
              app::lua_bind::WorkModule__set_float_impl(*ppBVar13,fVar14,iVar3);
              lib::L2CValue::~L2CValue((L2CValue *)&local_190);
              lib::L2CValue::~L2CValue(aLStack624);
              lib::L2CValue::~L2CValue((L2CValue *)auStack608);
              lib::L2CValue::~L2CValue((L2CValue *)auStack592);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
              pppvVar11 = appvStack560;
            }
            else {
              fVar14 = (float)lib::L2CValue::as_number(aLStack464);
              fVar15 = (float)lib::L2CValue::as_number(aLStack480);
              fVar14 = (float)app::sv_math::vec2_length(fVar14,fVar15);
              lib::L2CValue::L2CValue((L2CValue *)appvStack560,fVar14);
              lib::L2CValue::operator/((L2CValue *)auStack336,(L2CValue *)appvStack560);
              lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
              lib::L2CValue::operator*(aLStack480,(L2CValue *)&local_190);
              lib::L2CValue::operator=(aLStack496,(L2CValue *)appvStack560);
              lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
              uVar6 = lib::L2CValue::operator<(aLStack496,aLStack448);
              if ((uVar6 & 1) != 0) {
                lib::L2CValue::operator=(aLStack496,aLStack448);
              }
              lib::L2CValue::L2CValue
                        ((L2CValue *)appvStack560,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
              lib::L2CValue::operator*(aLStack464,(L2CValue *)&local_190);
              lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack560);
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
              lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack496);
              app::sv_kinetic_energy::set_speed(this->luaStateAgent);
              lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
              lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
              lib::L2CValue::operator*(aLStack192,aLStack512);
              fVar14 = (float)lib::L2CValue::as_number((L2CValue *)appvStack560);
              app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
              lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
              pppvVar11 = &local_190;
            }
            lib::L2CValue::~L2CValue((L2CValue *)pppvVar11);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0x16fdf3f559);
          HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_190);
          iVar3 = app::lua_bind::SoundModule__play_se_impl(*ppBVar13,HVar8,true,false,false,false,0)
          ;
          lib::L2CValue::L2CValue(aLStack672,iVar3);
          lib::L2CValue::~L2CValue(aLStack672);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue
                    ((L2CValue *)(auStack592 + 0x10),
                     _WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_INT_BOUND_NUM);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack592 + 0x10));
          iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)appvStack560,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
          uVar6 = lib::L2CValue::operator==((L2CValue *)appvStack560,(L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
          lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
          if ((uVar6 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_190,_MA_MSC_CMD_EFFECT_FOOT_EFFECT);
            lib::L2CValue::L2CValue((L2CValue *)appvStack560,0x1dd9afcc6d);
            lib::L2CValue::L2CValue((L2CValue *)(auStack592 + 0x10),0x31ed91fca);
            lib::L2CValue::L2CValue((L2CValue *)auStack592,0.0);
            lib::L2CValue::L2CValue((L2CValue *)auStack608,-2.0);
            lib::L2CValue::L2CValue(aLStack624,0.0);
            lib::L2CValue::L2CValue(aLStack640,0.0);
            lib::L2CValue::L2CValue(aLStack656,0.0);
            lib::L2CValue::L2CValue(aLStack704,0.0);
            lib::L2CValue::L2CValue(aLStack720,1.0);
            lib::L2CValue::L2CValue(aLStack736,0.0);
            lib::L2CValue::L2CValue(aLStack752,0.0);
            lib::L2CValue::L2CValue(aLStack768,0.0);
            lib::L2CValue::L2CValue(aLStack784,0.0);
            lib::L2CValue::L2CValue(aLStack800,0.0);
            lib::L2CValue::L2CValue(aLStack816,0.0);
            lib::L2CValue::L2CValue(aLStack832,true);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack560);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)(auStack592 + 0x10));
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack592);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack608);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack624);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack640);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack656);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack704);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack720);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack736);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack752);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack768);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack784);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack800);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack816);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack832);
            app::sv_module_access::effect(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::~L2CValue(aLStack688);
            lib::L2CValue::~L2CValue(aLStack832);
            lib::L2CValue::~L2CValue(aLStack816);
            lib::L2CValue::~L2CValue(aLStack800);
            lib::L2CValue::~L2CValue(aLStack784);
            lib::L2CValue::~L2CValue(aLStack768);
            lib::L2CValue::~L2CValue(aLStack752);
            lib::L2CValue::~L2CValue(aLStack736);
            lib::L2CValue::~L2CValue(aLStack720);
            lib::L2CValue::~L2CValue(aLStack704);
            lib::L2CValue::~L2CValue(aLStack656);
            lib::L2CValue::~L2CValue(aLStack640);
            lib::L2CValue::~L2CValue(aLStack624);
            lib::L2CValue::~L2CValue((L2CValue *)auStack608);
            lib::L2CValue::~L2CValue((L2CValue *)auStack592);
            lib::L2CValue::~L2CValue((L2CValue *)(auStack592 + 0x10));
            lib::L2CValue::~L2CValue((L2CValue *)appvStack560);
            lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          }
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_190,
                     _WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_INT_BOUND_NUM);
          iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::WorkModule__inc_int_impl(*ppBVar13,iVar3);
          pppvVar11 = &local_190;
        }
        lib::L2CValue::~L2CValue((L2CValue *)pppvVar11);
        lib::L2CValue::~L2CValue(aLStack528);
        lib::L2CValue::~L2CValue(aLStack512);
        lib::L2CValue::~L2CValue(aLStack496);
        lib::L2CValue::~L2CValue(aLStack480);
        lib::L2CValue::~L2CValue(aLStack464);
        lib::L2CValue::~L2CValue(aLStack448);
        lib::L2CValue::~L2CValue(aLStack432);
        lib::L2CValue::~L2CValue(aLStack416);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        pppvVar11 = appvStack304;
LAB_7100043540:
        lib::L2CValue::~L2CValue((L2CValue *)pppvVar11);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue((L2CValue *)&local_70);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_190,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLOAT_STOP_FRAME
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar14);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      fVar14 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack288,fVar14);
      pppvVar11 = &local_70;
      lib::L2CValue::operator-(aLStack288,(L2CValue *)pppvVar11);
      lib::L2CAgent::math_abs((L2CAgent *)auStack336,(L2CValue *)pppvVar11);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,1.0);
      uVar6 = lib::L2CValue::operator<((L2CValue *)appvStack304,(L2CValue *)&local_190);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        pppvVar11 = (void ***)auStack336;
LAB_7100042250:
        lib::L2CValue::~L2CValue((L2CValue *)pppvVar11);
      }
      else {
        pppvVar11 = &local_70;
        lib::L2CValue::operator-(aLStack288,(L2CValue *)pppvVar11);
        lib::L2CAgent::math_abs((L2CAgent *)auStack368,(L2CValue *)pppvVar11);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,0.0);
        uVar6 = lib::L2CValue::operator<((L2CValue *)&local_190,(L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
        lib::L2CValue::~L2CValue((L2CValue *)auStack368);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue((L2CValue *)appvStack304,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue((L2CValue *)auStack336);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
          app::lua_bind::MotionModule__set_frame_impl(*ppBVar13,fVar14,true);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,0);
          fVar14 = (float)lib::L2CValue::as_number((L2CValue *)&local_190);
          app::lua_bind::MotionModule__set_rate_impl(*ppBVar13,fVar14);
          pppvVar11 = &local_190;
          goto LAB_7100042250;
        }
      }
      iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)appvStack304,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_190,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==((L2CValue *)appvStack304,(L2CValue *)&local_190);
      lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
      if ((uVar6 & 1) == 0) {
        iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar13);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,iVar3);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,_SITUATION_KIND_GROUND);
        uVar6 = lib::L2CValue::operator==((L2CValue *)appvStack304,(L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_190,GROUND_CORRECT_KIND_GROUND);
          GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
          app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue((L2CValue *)appvStack304,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
          app::sv_kinetic_energy::set_speed(this->luaStateAgent);
          lib::L2CValue::~L2CValue((L2CValue *)auStack336);
          lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
          lib::L2CValue::~L2CValue((L2CValue *)&local_190);
          lib::L2CValue::L2CValue((L2CValue *)&local_190,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
          lib::L2CValue::L2CValue((L2CValue *)appvStack304,0.0);
          lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_190);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack304);
          lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
          app::sv_kinetic_energy::set_accel(this->luaStateAgent);
          goto LAB_71000424bc;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_190,GROUND_CORRECT_KIND_AIR);
        GVar5 = lib::L2CValue::as_integer((L2CValue *)&local_190);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar5);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,0x108f20bc73);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,0x7b9905530);
        uVar6 = lib::L2CValue::as_integer((L2CValue *)appvStack304);
        uVar7 = lib::L2CValue::as_integer((L2CValue *)auStack336);
        fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar6,uVar7);
        lib::L2CValue::L2CValue((L2CValue *)&local_190,fVar14);
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        lib::L2CValue::L2CValue((L2CValue *)appvStack304,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,0.0);
        lib::L2CValue::operator-((L2CValue *)&local_190);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)appvStack304);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
        app::sv_kinetic_energy::set_accel(this->luaStateAgent);
        lib::L2CValue::~L2CValue((L2CValue *)auStack352);
LAB_71000424bc:
        lib::L2CValue::~L2CValue((L2CValue *)auStack336);
        lib::L2CValue::~L2CValue((L2CValue *)appvStack304);
        lib::L2CValue::~L2CValue((L2CValue *)&local_190);
      }
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::~L2CValue(aLStack288);
      lib::L2CValue::~L2CValue((L2CValue *)&local_70);
    }
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_190,_WEAPON_INKLING_SPLASHBOMB_INSTANCE_WORK_ID_FLAG_EXPLODE);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_190);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar3);
    lib::L2CValue::~L2CValue((L2CValue *)&local_190);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::~L2CValue(aLStack256);
LAB_7100043568:
  lib::L2CValue::~L2CValue(aLStack208);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  return;
}

