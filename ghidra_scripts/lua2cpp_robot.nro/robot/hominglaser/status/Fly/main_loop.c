
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponRobotHominglaser::status::Fly_main_loop
          (L2CWeaponRobotHominglaser *this,L2CValue *return_value)

{
  L2CWeaponRobotHominglaser *this_00;
  Hash40Map *this_01;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CValue *pLVar9;
  Hash40 HVar10;
  void *pvVar11;
  BattleObjectModuleAccessor *pBVar12;
  undefined8 *puVar13;
  BattleObjectModuleAccessor **ppBVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  undefined8 auStack832 [2];
  L2CValue aLStack816 [16];
  L2CValue aLStack800 [16];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  undefined auStack752 [32];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  undefined auStack560 [16];
  undefined8 auStack544 [2];
  undefined8 auStack528 [2];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [32];
  undefined auStack304 [32];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [32];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  lua_State *plStack136;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_BURST);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  ppBVar14 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack160);
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar4 = lib::L2CValue::as_integer(aLStack176);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_BURST);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xd7d680f69);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar7 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_ALL);
      uVar5 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar14,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_BURST);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
    }
    iVar4 = app::sv_information::stage_id();
    lib::L2CValue::L2CValue(aLStack160,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,_set_mode_action_name);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) == 0) {
      uVar18 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar14);
      lib::L2CValue::L2CValue(aLStack208,(float)uVar18);
      lib::L2CValue::L2CValue(aLStack192,(float)((ulong)uVar18 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack208);
      lib::L2CValue::L2CValue(aLStack160,aLStack192);
      lua2cpp::L2CFighterBase::Vector2__create
                (this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'));
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      uVar15 = app::sv_camera_manager::dead_range(this->luaStateAgent);
      local_90 = (Hash40MapEntry **)CONCAT44(in_s1,uVar15);
      plStack136 = (lua_State *)CONCAT44(in_s3,in_s2);
      app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_90);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x47a67e768);
      uVar7 = lib::L2CValue::operator__(pLVar8,pLVar9);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x5b4ca7514);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
        uVar7 = lib::L2CValue::operator__(pLVar8,pLVar9);
        if ((uVar7 & 1) != 0) goto LAB_7100024130;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x6895f72a4);
        uVar7 = lib::L2CValue::operator__(pLVar8,pLVar9);
        if ((uVar7 & 1) != 0) goto LAB_7100024130;
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x31ed91fca);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x1fbdb2615);
        uVar7 = lib::L2CValue::operator__(pLVar8,pLVar9);
        if ((uVar7 & 1) != 0) goto LAB_7100024130;
      }
      else {
LAB_7100024130:
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_BURST);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_BURST);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar3 & 1U) != 0) {
    HVar10 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack160,HVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0x57d3ea0b0);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) == 0) {
      app::lua_bind::KineticModule__unable_energy_all_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x57d3ea0b0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack224,false);
      HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_90);
      fVar16 = (float)lib::L2CValue::as_number(aLStack160);
      fVar17 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack224);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar14,HVar10,fVar16,fVar17,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack176);
      lVar19 = -0x90;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x23dd1f1664);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lVar19 = -0xe0;
    }
    lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar19));
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack160);
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((bVar3 & 1U) != 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xf0991447e);
    lib::L2CValue::operator_(pLVar8,pLVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
    uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar7 & 1) != 0) {
      app::WeaponRobotHominglaserLinkEventSearch::new_l2c_table();
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_INDEX);
      iVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar4);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x65e51e019);
      lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_LINK_NO_CONSTRAINT);
      FUN_7100023af0(&local_90,this,aLStack176,aLStack160);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack176);
      pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x7ad7b88f7);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x11b7a5af6f);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x11b7a5af6f);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,
                     _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
          iVar4 = lib::L2CValue::as_integer(pLVar8);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x12b990a67f);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,
                     _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_ARTICLE_OBJECT_ID);
          iVar4 = lib::L2CValue::as_integer(pLVar8);
          iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar6);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x12b990a67f);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
          uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((uVar7 & 1) == 0) {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x12b990a67f);
            uVar5 = lib::L2CValue::as_integer(pLVar8);
            pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar5);
            if (pvVar11 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_90,
                         (L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar11);
            }
            lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_FLAG_NO_DEAD);
            iVar4 = lib::L2CValue::as_integer(aLStack176);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90)
            ;
            app::lua_bind::WorkModule__on_flag_impl(pBVar12,iVar4);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          }
        }
      }
      lib::L2CValue::_L2CValue(aLStack160);
    }
  }
  lib::L2CValue::L2CValue(aLStack224,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
  uVar18 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),(float)uVar18);
  lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar18 >> 0x20));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue(aLStack160,aLStack272);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)(cVar1 + '\x10'));
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue(aLStack224);
  this_00 = this + 1;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x55dfc36e5);
  lib::L2CValue::L2CValue(aLStack224,pLVar8);
  lib::L2CValue::L2CValue((L2CValue *)auStack304,0.0);
  this_01 = &this[1].functions;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
  lib::L2CValue::L2CValue((L2CValue *)(auStack336 + 0x10),pLVar8);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack336,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack160);
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    if ((bVar3 & 1U) == 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xc470cb748);
      bVar2 = lib::L2CValue::operator__(pLVar8,pLVar9);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
      uVar7 = lib::L2CValue::operator__((L2CValue *)auStack336,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) != 0) {
        uVar18 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar14);
        lib::L2CValue::L2CValue(aLStack384,(float)uVar18);
        lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar18 >> 0x20));
        lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack384);
        lib::L2CValue::L2CValue(aLStack160,aLStack368);
        lua2cpp::L2CFighterBase::Vector2__create
                  (this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'));
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue(aLStack400,(L2CValue *)auStack352);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa4fc9c459);
        lib::L2CValue::L2CValue(aLStack416,pLVar8);
        lua2cpp::L2CFighterBase::Vector2__distance_square(this,(L2CValue)0x70,(L2CValue)0x60);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack400);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xf99cb349d);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xf99cb349d);
        lib::L2CValue::operator_(pLVar8,pLVar9);
        bVar2 = lib::L2CValue::operator_(aLStack432,aLStack160);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
        lib::L2CValue::operator_((L2CValue *)auStack336,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      uVar7 = lib::L2CValue::operator__((L2CValue *)auStack336,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,
                   _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING_DISABLE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,
                   _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_ARTICLE_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
        lib::L2CValue::L2CValue(aLStack160,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
        uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::sv_battle_object::is_active(uVar5);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
          if ((bVar3 & 1U) != 0) {
            uVar5 = lib::L2CValue::as_integer(aLStack160);
            bVar2 = app::sv_battle_object::is_null(uVar5);
            lib::L2CValue::L2CValue(aLStack432,(bool)(bVar2 & 1));
            lib::L2CValue::operator_(aLStack432);
            bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            if ((bVar3 & 1U) == 0) goto LAB_7100024e10;
            uVar5 = lib::L2CValue::as_integer(aLStack160);
            pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar5);
            if (pvVar11 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_90,
                         (L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_90,pvVar11);
            }
            lib::L2CValue::L2CValue
                      ((L2CValue *)auStack352,_WEAPON_SONIC_HOMINGTARGET_STATUS_KIND_STAY);
            lib::L2CValue::L2CValue(aLStack432,false);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
            bVar2 = lib::L2CValue::as_bool(aLStack432);
            pBVar12 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer((L2CValue *)&local_90)
            ;
            bVar2 = app::lua_bind::StatusModule__change_status_request_impl
                              (pBVar12,iVar4,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack448,(bool)(bVar2 & 1));
            lib::L2CValue::_L2CValue(aLStack448);
            lib::L2CValue::_L2CValue(aLStack432);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
LAB_7100024e10:
        lib::L2CValue::_L2CValue(aLStack160);
      }
      pLVar8 = (L2CValue *)auStack336;
LAB_7100024e1c:
      lib::L2CValue::_L2CValue(pLVar8);
    }
    else {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack336,
                 _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING_DISABLE);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack160);
      bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      if ((bVar3 & 1U) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x81c929a81);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xebbaf9f02);
        uVar7 = lib::L2CValue::operator__(pLVar9,pLVar8);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue(aLStack160,0);
          fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,fVar16);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
          lib::L2CValue::operator_((L2CValue *)auStack352,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,-1.0);
          puVar13 = &local_90;
          uVar7 = lib::L2CValue::operator__((L2CValue *)auStack336,(L2CValue *)puVar13);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack336);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)auStack336,180.0);
            lib::L2CAgent::math_rad((L2CAgent *)auStack336,(L2CValue *)puVar13);
            lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)auStack336);
          }
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
          fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack336);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
          app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar4);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack336);
          pLVar8 = aLStack160;
          goto LAB_7100024e1c;
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
  iVar4 = lib::L2CValue::as_integer(aLStack160);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((bVar3 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack336,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING_DISABLE
              );
    iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack336);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack160);
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    if ((bVar3 & 1U) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x81c929a81);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe4537ceec);
      uVar7 = lib::L2CValue::operator__(pLVar9,pLVar8);
      if ((uVar7 & 1) != 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd592c372d);
        lib::L2CValue::operator_(pLVar8);
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
        if ((bVar3 & 1U) == 0) {
          puVar13 = &local_90;
          goto LAB_7100025e04;
        }
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
        pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x131e7aa796);
        uVar7 = lib::L2CValue::operator_(pLVar8,pLVar9);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x516223d8b);
          lib::L2CValue::operator_((L2CValue *)auStack304,pLVar8);
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_90,
                 _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
      iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue(aLStack160,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
      uVar7 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      if ((uVar7 & 1) == 0) {
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::sv_battle_object::is_active(uVar5);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
        bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
        if ((bVar3 & 1U) == 0) {
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
        else {
          uVar5 = lib::L2CValue::as_integer(aLStack160);
          bVar2 = app::sv_battle_object::is_null(uVar5);
          lib::L2CValue::L2CValue((L2CValue *)auStack352,(bool)(bVar2 & 1));
          lib::L2CValue::operator_((L2CValue *)auStack352);
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack336);
          lib::L2CValue::_L2CValue((L2CValue *)auStack336);
          lib::L2CValue::_L2CValue((L2CValue *)auStack352);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((bVar3 & 1U) != 0) {
            uVar5 = lib::L2CValue::as_integer(aLStack160);
            pvVar11 = (void *)app::sv_battle_object::module_accessor(uVar5);
            if (pvVar11 == (void *)0x0) {
              lib::L2CValue::L2CValue
                        ((L2CValue *)auStack336,
                         (L2CValue *)&FIGHTER_STATUS_WORK_KEEP_FLAG_AIR_LASSO_REACH_FLOAT);
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)auStack336,pvVar11);
            }
            lib::L2CValue::L2CValue(aLStack432,0xde223373b);
            lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x30),0);
            lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x20),0);
            lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),0);
            lib::L2CValue::L2CValue((L2CValue *)auStack560,false);
            HVar10 = lib::L2CValue::as_hash(aLStack432);
            uVar7 = lib::L2CValue::as_number((L2CValue *)(auStack560 + 0x30));
            lVar19 = lib::L2CValue::as_number((L2CValue *)(auStack560 + 0x20));
            uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack560 + 0x10));
            local_90 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar19 << 0x20);
            plStack136 = (lua_State *)(ulong)uVar5;
            bVar2 = lib::L2CValue::as_bool((L2CValue *)auStack560);
            pBVar12 = (BattleObjectModuleAccessor *)
                      lib::L2CValue::as_pointer((L2CValue *)auStack336);
            app::lua_bind::ModelModule__joint_global_position_impl
                      (pBVar12,HVar10,(Vector3f *)&local_90,(bool)(bVar2 & 1));
            lib::L2CValue::L2CValue(aLStack496,(float)local_90);
            lib::L2CValue::L2CValue(aLStack480,local_90._4_4_);
            lib::L2CValue::L2CValue(aLStack464,plStack136._0_4_);
            FUN_71000026e0(auStack352,this,aLStack496);
            lib::L2CValue::_L2CValue(aLStack464);
            lib::L2CValue::_L2CValue(aLStack480);
            lib::L2CValue::_L2CValue(aLStack496);
            lib::L2CValue::_L2CValue((L2CValue *)auStack560);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
            lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
            lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
            lib::L2CValue::_L2CValue(aLStack432);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack352,0x18cdc1683);
            lib::L2CValue::L2CValue(aLStack576,pLVar8);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack352,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack592,pLVar8);
            lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa4fc9c459);
            lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            lib::L2CValue::_L2CValue(aLStack592);
            lib::L2CValue::_L2CValue(aLStack576);
            lib::L2CValue::_L2CValue((L2CValue *)auStack352);
            lib::L2CValue::_L2CValue((L2CValue *)auStack336);
            goto LAB_7100024f20;
          }
        }
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,
                   _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING_DISABLE);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0x50000000);
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack336,
                   _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        iVar6 = lib::L2CValue::as_integer((L2CValue *)auStack336);
        app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar4,iVar6);
        lib::L2CValue::_L2CValue((L2CValue *)auStack336);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        app::WeaponRobotHominglaserLinkEventBurst::new_l2c_table();
        lib::L2CValue::L2CValue
                  ((L2CValue *)auStack352,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_INT_INDEX);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack352);
        iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar14,iVar4);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,iVar4);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&local_90,0x65e51e019);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack336);
        lib::L2CValue::_L2CValue((L2CValue *)auStack336);
        lib::L2CValue::_L2CValue((L2CValue *)auStack352);
        lib::L2CValue::L2CValue((L2CValue *)auStack336,_WEAPON_LINK_NO_CONSTRAINT);
        FUN_7100023af0(aLStack608,this,auStack336,&local_90);
        lib::L2CValue::_L2CValue(aLStack608);
        lib::L2CValue::_L2CValue((L2CValue *)auStack336);
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        goto LAB_7100026288;
      }
LAB_7100024f20:
      lib::L2CValue::_L2CValue(aLStack160);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
    pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_90);
    fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar8);
    lib::L2CValue::L2CValue((L2CValue *)auStack336,fVar16);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CAgent::math_cos((L2CAgent *)auStack336,pLVar8);
    lib::L2CAgent::math_sin((L2CAgent *)auStack336,pLVar8);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack640);
    lib::L2CValue::_L2CValue(aLStack624);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xa4fc9c459);
    uVar18 = app::lua_bind::PostureModule__pos_2d_impl(*ppBVar14);
    lib::L2CValue::L2CValue(aLStack688,(float)uVar18);
    lib::L2CValue::L2CValue(aLStack672,(float)((ulong)uVar18 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_90,aLStack688);
    lib::L2CValue::L2CValue(aLStack160,aLStack672);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)(cVar1 + -0x80),(L2CValue)(cVar1 + 'p'))
    ;
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack560 + 0x30));
    lua2cpp::L2CFighterBase::Vector2__normalize(this,(L2CValue)0x70);
    lib::L2CValue::_L2CValue(aLStack656);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
    lib::L2CValue::_L2CValue(aLStack672);
    lib::L2CValue::_L2CValue(aLStack688);
    lib::L2CValue::L2CValue(aLStack704,(L2CValue *)auStack352);
    lib::L2CValue::L2CValue(aLStack720,aLStack432);
    pLVar8 = aLStack704;
    lua2cpp::L2CFighterBase::Vector2__dot(this,SUB81(pLVar8,0),(L2CValue)0x30);
    lib::L2CAgent::math_acos((L2CAgent *)&local_90,pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack720);
    lib::L2CValue::_L2CValue(aLStack704);
    pLVar8 = aLStack160;
    uVar7 = lib::L2CValue::operator__(aLStack160,pLVar8);
    if ((uVar7 & 1) != 0) {
      lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,1e-05);
      uVar7 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack560 + 0x30));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x30),1.0);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xca5c2420c);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) != 0) {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x81c929a81);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x13d95b9fa1);
          uVar7 = lib::L2CValue::operator_(pLVar9,pLVar8);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack560 + 0x10),
                       _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
            iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack560 + 0x10));
            bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
            lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x20),(bool)(bVar2 & 1));
            bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack560 + 0x20));
            if ((bVar3 & 1U) == 0) {
              lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
              puVar13 = (undefined8 *)(auStack560 + 0x10);
            }
            else {
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd83f3178a);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
              uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
              lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
              if ((uVar7 & 1) == 0) goto LAB_71000257ac;
              lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x20),aLStack160);
              fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
              lib::L2CValue::L2CValue((L2CValue *)(auStack752 + 0x10),fVar16);
              lib::L2CValue::L2CValue(aLStack768,(L2CValue *)auStack352);
              lib::L2CValue::L2CValue(aLStack784,aLStack432);
              lua2cpp::L2CFighterBase::Vector2__cross(this,(L2CValue)0x0,(L2CValue)0xf0);
              lib::L2CValue::operator_((L2CValue *)(auStack752 + 0x10),(L2CValue *)auStack752);
              lib::L2CValue::L2CValue
                        (aLStack816,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE_MUL);
              iVar4 = lib::L2CValue::as_integer(aLStack816);
              fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
              lib::L2CValue::L2CValue(aLStack800,fVar16);
              lib::L2CValue::operator_((L2CValue *)auStack560,aLStack800);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
              uVar7 = lib::L2CValue::operator_
                                ((L2CValue *)(auStack560 + 0x10),(L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
              lib::L2CValue::_L2CValue(aLStack800);
              lib::L2CValue::_L2CValue(aLStack816);
              lib::L2CValue::_L2CValue((L2CValue *)auStack560);
              lib::L2CValue::_L2CValue((L2CValue *)auStack752);
              lib::L2CValue::_L2CValue(aLStack784);
              lib::L2CValue::_L2CValue(aLStack768);
              lib::L2CValue::_L2CValue((L2CValue *)(auStack752 + 0x10));
              if ((uVar7 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_90,2.0);
                lib::L2CValue::operator_
                          ((L2CValue *)&local_90,(L2CValue *)&FIGHTER_STATUS_KIND_DETACH_WALL);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
                lib::L2CValue::operator_((L2CValue *)auStack560,aLStack160);
                lib::L2CValue::operator_
                          ((L2CValue *)(auStack560 + 0x20),(L2CValue *)(auStack560 + 0x10));
                lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
                lib::L2CValue::_L2CValue((L2CValue *)auStack560);
              }
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x104fd77ba9);
              uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)(auStack560 + 0x20));
              if ((uVar7 & 1) != 0) {
                pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xca5c2420c);
                lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
                lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
                lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              }
              pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd83f3178a);
              lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
              lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
              lib::L2CValue::_L2CValue((L2CValue *)&local_90);
              puVar13 = (undefined8 *)(auStack560 + 0x20);
            }
          }
          else {
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xca5c2420c);
            lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
            lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
            puVar13 = &local_90;
          }
          lib::L2CValue::_L2CValue((L2CValue *)puVar13);
        }
LAB_71000257ac:
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xca5c2420c);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,true);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack832,(L2CValue *)auStack352);
          lib::L2CValue::L2CValue(aLStack848,aLStack432);
          lua2cpp::L2CFighterBase::Vector2__cross(this,(L2CValue)0xc0,(L2CValue)0xb0);
          lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
          uVar7 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack560);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          bVar3 = (uVar7 & 1) == 0;
          if (bVar3) {
            lib::L2CValue::L2CValue((L2CValue *)(auStack752 + 0x10),1.0);
            lib::L2CValue::operator_((L2CValue *)(auStack752 + 0x10));
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),1.0);
          }
          lib::L2CValue::L2CValue
                    (aLStack800,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE_MUL);
          pLVar8 = (L2CValue *)lib::L2CValue::as_integer(aLStack800);
          fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar8);
          lib::L2CValue::L2CValue((L2CValue *)auStack752,fVar16);
          lib::L2CAgent::math_abs((L2CAgent *)auStack752,pLVar8);
          lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x10),(L2CValue *)&local_90);
          lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x30),(L2CValue *)(auStack560 + 0x20));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)auStack752);
          lib::L2CValue::_L2CValue(aLStack800);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
          if (bVar3) {
            lib::L2CValue::_L2CValue((L2CValue *)(auStack752 + 0x10));
          }
          lib::L2CValue::_L2CValue((L2CValue *)auStack560);
          lib::L2CValue::_L2CValue(aLStack848);
          puVar13 = auStack832;
        }
        else {
          fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
          lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x20),fVar16);
          lib::L2CValue::L2CValue
                    ((L2CValue *)auStack560,
                     _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE_MUL);
          iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack560);
          fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
          lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),fVar16);
          lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x20),(L2CValue *)(auStack560 + 0x10));
          lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x30),(L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack560);
          puVar13 = (undefined8 *)(auStack560 + 0x20);
        }
        lib::L2CValue::_L2CValue((L2CValue *)puVar13);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x99f2bb267);
        lib::L2CValue::operator_(aLStack176,pLVar8);
        lib::L2CValue::L2CValue(aLStack864,(L2CValue *)auStack336);
        lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x30),aLStack160);
        lib::L2CValue::operator_((L2CValue *)auStack336,(L2CValue *)&local_90);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1114fda200);
        lib::L2CValue::operator_(pLVar8,(L2CValue *)(auStack560 + 0x20));
        lua2cpp::L2CFighterBase::lerp(this,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack896);
        lib::L2CValue::_L2CValue(aLStack880);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue(aLStack864);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
        lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x10),(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)auStack560);
        pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,(int)pLVar8);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)auStack560);
        lib::L2CAgent::math_abs((L2CAgent *)aLStack160,pLVar8);
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xbe44e1739);
        uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
LAB_7100025b88:
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        }
        else {
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd592c372d);
          lib::L2CValue::operator_(pLVar8);
          bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack560);
          if ((bVar3 & 1U) == 0) {
            lib::L2CValue::_L2CValue((L2CValue *)auStack560);
            goto LAB_7100025b88;
          }
          pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
          pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x131e7aa796);
          uVar7 = lib::L2CValue::operator_(pLVar8,pLVar9);
          lib::L2CValue::_L2CValue((L2CValue *)auStack560);
          lib::L2CValue::_L2CValue((L2CValue *)&local_90);
          if ((uVar7 & 1) != 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
            lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_90);
            lib::L2CValue::_L2CValue((L2CValue *)&local_90);
            pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x516223d8b);
            lib::L2CValue::operator_((L2CValue *)auStack304,pLVar8);
          }
        }
        lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)(auStack560 + 0x20),
               _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_LOCK_ON);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)(auStack560 + 0x20));
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x30),(bool)(bVar2 & 1));
    lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x30));
    bVar3 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
    lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)(auStack560 + 0x20),
                 _WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
      pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)(auStack560 + 0x20));
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar8);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar16);
      lib::L2CAgent::math_sin((L2CAgent *)&local_90,pLVar8);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack560,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE_MUL);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack560);
      fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar4);
      lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),fVar16);
      lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x30),(L2CValue *)(auStack560 + 0x10));
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      uVar7 = lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x20),(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack560);
      if ((uVar7 & 1) != 0) {
        fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
        lib::L2CValue::L2CValue((L2CValue *)auStack752,fVar16);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,1.0);
        puVar13 = &local_90;
        uVar7 = lib::L2CValue::operator__((L2CValue *)auStack752,(L2CValue *)puVar13);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)auStack560,0.0);
        }
        else {
          lib::L2CValue::L2CValue((L2CValue *)auStack560,180.0);
        }
        lib::L2CAgent::math_rad((L2CAgent *)auStack560,(L2CValue *)puVar13);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
        lib::L2CValue::operator_((L2CValue *)(auStack560 + 0x10),(L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
        fVar16 = (float)lib::L2CValue::as_number((L2CValue *)(auStack560 + 0x20));
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar16,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack560);
        lib::L2CValue::_L2CValue((L2CValue *)auStack752);
        lib::L2CValue::L2CValue
                  ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLAG_HOMING);
        iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_90);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar14,iVar4);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    puVar13 = (undefined8 *)auStack336;
LAB_7100025e04:
    lib::L2CValue::_L2CValue((L2CValue *)puVar13);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_90,_WEAPON_ROBOT_HOMINGLASER_INSTANCE_WORK_ID_FLOAT_ANGLE);
  pLVar8 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_90);
  fVar16 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,(int)pLVar8);
  lib::L2CValue::L2CValue(aLStack160,fVar16);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CAgent::math_deg((L2CAgent *)aLStack160,pLVar8);
  lib::L2CValue::operator_((L2CValue *)auStack352);
  fVar16 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x20),fVar16);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,90.0);
  lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack560 + 0x20));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,90.0);
  lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack560 + 0x30));
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)(auStack560 + 0x10),0.0);
  uVar7 = lib::L2CValue::as_number((L2CValue *)auStack336);
  lVar19 = lib::L2CValue::as_number(aLStack432);
  uVar5 = lib::L2CValue::as_number((L2CValue *)(auStack560 + 0x10));
  local_90 = (Hash40MapEntry **)(uVar7 & 0xffffffff | lVar19 << 0x20);
  plStack136 = (lua_State *)(ulong)uVar5;
  pLVar8 = (L2CValue *)0x0;
  app::lua_bind::PostureModule__set_rot_impl(*ppBVar14,(Vector3f *)&local_90,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x10));
  lib::L2CValue::_L2CValue(aLStack432);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x30));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack560 + 0x20));
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar14);
  lib::L2CValue::L2CValue((L2CValue *)auStack336,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
  uVar7 = lib::L2CValue::operator__((L2CValue *)auStack336,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::operator_(aLStack176,aLStack224);
    lib::L2CValue::operator_(aLStack432,(L2CValue *)auStack304);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x9a3268d3e);
    lib::L2CAgent::math_max((L2CAgent *)auStack352,pLVar9,pLVar8);
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x99f2bb267);
    lib::L2CAgent::math_min((L2CAgent *)auStack336,pLVar9,pLVar8);
    puVar13 = &local_90;
    lib::L2CValue::operator_(aLStack176,(L2CValue *)puVar13);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CAgent::math_cos((L2CAgent *)aLStack160,(L2CValue *)puVar13);
    pLVar8 = aLStack176;
    lib::L2CValue::operator_((L2CValue *)auStack336,pLVar8);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CAgent::math_sin((L2CAgent *)aLStack160,pLVar8);
    lib::L2CValue::operator_((L2CValue *)auStack352,aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::L2CValue((L2CValue *)auStack352,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack352);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack336);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)auStack352);
    lib::L2CValue::_L2CValue((L2CValue *)auStack336);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x81c929a81);
  lib::L2CValue::operator_(pLVar8,aLStack176);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0x81c929a81);
  puVar13 = &local_90;
  lib::L2CValue::operator_(pLVar8,(L2CValue *)puVar13);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CAgent::math_abs((L2CAgent *)auStack304,(L2CValue *)puVar13);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,1e-05);
  uVar7 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack352);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  bVar3 = (uVar7 & 1) == 0;
  if (bVar3) {
    lib::L2CValue::L2CValue((L2CValue *)auStack336,0);
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
    lib::L2CValue::L2CValue(aLStack432,1);
    lib::L2CValue::operator_(pLVar8,aLStack432);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
  lib::L2CValue::operator_(pLVar8,(L2CValue *)auStack336);
  lib::L2CValue::_L2CValue((L2CValue *)auStack336);
  if (!bVar3) {
    lib::L2CValue::_L2CValue(aLStack432);
  }
  lib::L2CValue::_L2CValue((L2CValue *)auStack352);
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd592c372d);
  bVar3 = lib::L2CValue::operator_cast_to_bool(pLVar8);
  if ((bVar3 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xb0096f00a);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
    uVar7 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar7 & 1) == 0) {
      bVar2 = 0;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0);
      bVar2 = lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)(auStack336 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    }
  }
  else {
    bVar2 = 1;
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_01,0xd592c372d);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(pLVar8,(L2CValue *)&local_90);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100026288:
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack336 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack304);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

