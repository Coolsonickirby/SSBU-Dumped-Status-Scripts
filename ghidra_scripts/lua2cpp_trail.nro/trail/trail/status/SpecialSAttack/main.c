
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTrail::status::SpecialSAttack_main(L2CFighterTrail *this,L2CValue *return_value)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  GroundCorrectKind GVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  Hash40 HVar12;
  void ***pppvVar13;
  L2CValue *pLVar14;
  L2CValue *pLVar15;
  void *pvVar16;
  L2CValue *pLVar17;
  GroundCollisionLine *pGVar18;
  void ***this_00;
  L2CAgent *this_01;
  L2CValue *pLVar19;
  undefined8 *puVar20;
  BattleObjectModuleAccessor **ppBVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined8 uVar27;
  void **ppvVar28;
  undefined4 in_s3;
  L2CValue aLStack1040 [16];
  L2CValue aLStack1024 [16];
  L2CValue aLStack1008 [16];
  L2CValue aLStack992 [16];
  L2CValue aLStack976 [16];
  L2CValue aLStack960 [16];
  L2CValue aLStack944 [16];
  L2CValue aLStack928 [16];
  L2CValue aLStack912 [16];
  L2CValue aLStack896 [16];
  L2CValue aLStack880 [16];
  L2CValue aLStack864 [16];
  L2CValue aLStack848 [16];
  L2CValue aLStack832 [16];
  L2CValue aLStack816 [16];
  void **appvStack800 [2];
  L2CValue aLStack784 [16];
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  undefined auStack640 [32];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  void **appvStack416 [2];
  L2CValue aLStack400 [16];
  undefined auStack384 [32];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  void **local_80;
  lua_State *plStack120;
  undefined8 local_70;
  lua_State *plStack104;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_TOUCH_FLAG_DOWN);
  uVar4 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  ppBVar21 = &this->moduleAccessor;
  bVar3 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar21,uVar4);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar3 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_ATTACK_COUNT);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue(aLStack160,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_80);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH_PREV);
  bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_70);
  iVar5 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar21,(bool)(bVar3 & 1),iVar5);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TOUCH_GROUND);
  bVar3 = lib::L2CValue::as_bool(aLStack144);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar21,(bool)(bVar3 & 1),iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_BUTTON);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__off_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_TO_SEARCH_PREV);
  iVar5 = lib::L2CValue::as_integer(aLStack192);
  bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  uVar9 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  bVar1 = (uVar9 & 1) == 0;
  if (bVar1) {
    bVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_SEARCH_STICK);
    iVar5 = lib::L2CValue::as_integer(aLStack224);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar21,iVar5);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    bVar3 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLAG_ATTACK_BUTTON);
  bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_80);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::WorkModule__set_flag_impl(*ppBVar21,(bool)(bVar3 & 1),iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  if (!bVar1) {
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
  uVar9 = lib::L2CValue::operator_((L2CValue *)&local_70,aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack976,0xb9afea4ec);
    lib::L2CValue::L2CValue(aLStack992,0xf6d6ca1db);
    lib::L2CValue::L2CValue(aLStack1008,false);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x30,(L2CValue)0x20,(L2CValue)0x10);
    lib::L2CValue::_L2CValue(aLStack960);
    lib::L2CValue::_L2CValue(aLStack1008);
    lib::L2CValue::_L2CValue(aLStack992);
    lib::L2CValue::_L2CValue(aLStack976);
    lib::L2CValue::L2CValue(aLStack1024,true);
    FUN_710002b880(this);
    lib::L2CValue::_L2CValue(aLStack1024);
    FUN_710002ba70(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lVar11 = -0x60;
    goto LAB_710002a370;
  }
  lib::L2CValue::L2CValue(aLStack240,aLStack160);
  lib::L2CValue::L2CValue(aLStack256,false);
  lib::L2CValue::L2CValue(aLStack272,aLStack144);
  FUN_710002afb0(this,aLStack240,aLStack256,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar21,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue(aLStack288,SITUATION_KIND_AIR);
  lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue(aLStack288);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,GROUND_CORRECT_KIND_AIR);
  GVar6 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  app::lua_bind::GroundModule__correct_impl(*ppBVar21,GVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
  bVar3 = lib::L2CValue::as_bool((L2CValue *)&local_70);
  app::lua_bind::GroundModule__set_passable_check_impl(*ppBVar21,(bool)(bVar3 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_INT_SEARCH_TARGET_ID);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  iVar5 = app::lua_bind::WorkModule__get_int_impl(*ppBVar21,iVar5);
  lib::L2CValue::L2CValue(aLStack176,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  FUN_710002b2d0(aLStack192,this);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  fVar26 = 0.0;
  lib::L2CValue::L2CValue(aLStack336,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  fVar22 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar21);
  lib::L2CValue::L2CValue(aLStack352,fVar22);
  lib::L2CValue::L2CValue((L2CValue *)(auStack384 + 0x10),aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0x50000000);
  uVar9 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((uVar9 & 1) == 0) {
    uVar4 = lib::L2CValue::as_integer(aLStack176);
    uVar27 = app::FighterSpecializer_Trail::get_special_s_target_pos(uVar4);
    lib::L2CValue::L2CValue(aLStack512,(float)uVar27);
    lib::L2CValue::L2CValue(aLStack496,(float)((ulong)uVar27 >> 0x20));
    lib::L2CValue::L2CValue(aLStack480,fVar26);
    FUN_7100024cc0(auStack384,this,aLStack512);
    lib::L2CValue::_L2CValue(aLStack480);
    lib::L2CValue::_L2CValue(aLStack496);
    lib::L2CValue::_L2CValue(aLStack512);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0x187367db00);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    lVar11 = app::lua_bind::WorkModule__get_param_int64_impl(*ppBVar21,uVar9,uVar10);
    lib::L2CValue::L2CValue(aLStack400,lVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
    lib::L2CValue::L2CValue(aLStack432,0.0);
    lib::L2CValue::L2CValue(aLStack448,0.0);
    HVar12 = lib::L2CValue::as_hash(aLStack400);
    uVar9 = lib::L2CValue::as_number((L2CValue *)&local_80);
    lVar11 = lib::L2CValue::as_number(aLStack432);
    uVar4 = lib::L2CValue::as_number(aLStack448);
    local_70 = (Hash40MapEntry **)(uVar9 & 0xffffffff | lVar11 << 0x20);
    plStack104 = (lua_State *)(ulong)uVar4;
    app::lua_bind::ModelModule__joint_global_position_impl
              (*ppBVar21,HVar12,(Vector3f *)&local_70,true);
    lib::L2CValue::L2CValue(aLStack560,(float)local_70);
    lib::L2CValue::L2CValue(aLStack544,local_70._4_4_);
    lib::L2CValue::L2CValue(aLStack528,plStack104._0_4_);
    FUN_7100024cc0(appvStack416,this,aLStack560);
    lib::L2CValue::_L2CValue(aLStack528);
    lib::L2CValue::_L2CValue(aLStack544);
    lib::L2CValue::_L2CValue(aLStack560);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x18cdc1683);
    pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x18cdc1683);
    lib::L2CValue::operator_(pLVar17,pLVar19);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x1fbdb2615);
    pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar17,pLVar19);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack592);
    lib::L2CValue::_L2CValue(aLStack576);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,0x1719bf7eb5);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    uVar10 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar9,uVar10);
    lib::L2CValue::L2CValue(aLStack448,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)(auStack640 + 0x10),0xfea97fe73);
    lib::L2CValue::L2CValue((L2CValue *)auStack640,0xaa5d51ffa);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack640 + 0x10));
    pppvVar13 = (void ***)lib::L2CValue::as_integer((L2CValue *)auStack640);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar9,(ulong)pppvVar13);
    lib::L2CValue::L2CValue(aLStack608,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,1);
    lib::L2CValue::operator_(aLStack608,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    uVar9 = lib::L2CValue::operator__(aLStack160,(L2CValue *)&local_80);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)auStack640);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack640 + 0x10));
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack640 + 0x10),0xfea97fe73);
      lib::L2CValue::L2CValue((L2CValue *)auStack640,0x130dd4d94a);
      uVar9 = lib::L2CValue::as_integer((L2CValue *)(auStack640 + 0x10));
      uVar10 = lib::L2CValue::as_integer((L2CValue *)auStack640);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar9,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
      lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack640 + 0x10));
      pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack688,pLVar17);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack704,pLVar17);
      lib::L2CValue::L2CValue(aLStack720,aLStack608);
      FUN_71000270f0(aLStack672,this,aLStack688,aLStack704,aLStack720);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack672);
      lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack656);
      cVar2 = (char)&stack0xfffffffffffffff0;
      lua2cpp::L2CFighterBase::Vector2__create
                (this,(L2CValue)(cVar2 + -0x60),(L2CValue)(cVar2 + -0x70));
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack720);
      lib::L2CValue::_L2CValue(aLStack704);
      lib::L2CValue::_L2CValue(aLStack688);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x18cdc1683);
      pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)appvStack416,0x1fbdb2615);
      pLVar14 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack640 + 0x10),0x18cdc1683);
      pLVar15 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack640 + 0x10),0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack736,true);
      uVar9 = lib::L2CValue::as_number(pLVar17);
      uVar4 = lib::L2CValue::as_number(pLVar19);
      local_70 = (Hash40MapEntry **)(uVar9 & 0xffffffff | (ulong)uVar4 << 0x20);
      plStack104 = (lua_State *)0x0;
      uVar23 = lib::L2CValue::as_number(pLVar14);
      uVar24 = lib::L2CValue::as_number(pLVar15);
      ppvVar28 = (void **)CONCAT44(uVar24,uVar23);
      plStack120 = (lua_State *)0x0;
      local_80 = ppvVar28;
      bVar3 = lib::L2CValue::as_bool(aLStack736);
      uVar24 = SUB84(ppvVar28,0);
      pppvVar13 = &local_80;
      pvVar16 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                  (*ppBVar21,(Vector2f *)&local_70,(Vector2f *)pppvVar13,
                                   (bool)(bVar3 & 1));
      if (pvVar16 == (void *)0x0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack640,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)auStack640,pvVar16);
      }
      lib::L2CValue::_L2CValue(aLStack736);
      uVar9 = lib::L2CValue::operator__
                        ((L2CValue *)auStack640,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
      if ((uVar9 & 1) == 0) {
        pGVar18 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)auStack640);
        bVar3 = app::sv_ground_collision_line::is_floor(pGVar18);
        lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
        lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
        uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)&local_80);
        if ((uVar9 & 1) != 0) {
          lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
          uVar25 = app::sv_camera_manager::dead_range(this->luaStateAgent);
          local_70 = (Hash40MapEntry **)CONCAT44(uVar24,uVar25);
          plStack104 = (lua_State *)CONCAT44(in_s3,uVar23);
          app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_70);
          lib::L2CValue::L2CValue(aLStack752);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
          uVar9 = lib::L2CValue::operator__((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          if ((uVar9 & 1) == 0) {
            pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack736,0x5b4ca7514);
            pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x18cdc1683);
            lib::L2CValue::operator_(pLVar17,pLVar19);
            lib::L2CValue::operator_(aLStack752,(L2CValue *)&local_70);
          }
          else {
            pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x18cdc1683);
            pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack736,0x47a67e768);
            lib::L2CValue::operator_(pLVar17,pLVar19);
            lib::L2CValue::operator_(aLStack752,(L2CValue *)&local_70);
          }
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          lib::L2CValue::L2CValue((L2CValue *)appvStack800,0xfea97fe73);
          lib::L2CValue::L2CValue(aLStack816,0x190b863464);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)appvStack800);
          uVar10 = lib::L2CValue::as_integer(aLStack816);
          fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar9,uVar10);
          lib::L2CValue::L2CValue(aLStack784,fVar22);
          lib::L2CValue::L2CValue((L2CValue *)&local_70,10.0);
          lib::L2CValue::operator_(aLStack784,(L2CValue *)&local_70);
          lib::L2CValue::_L2CValue((L2CValue *)&local_70);
          uVar9 = lib::L2CValue::operator__(aLStack752,aLStack768);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::_L2CValue(aLStack768);
            lib::L2CValue::_L2CValue(aLStack784);
            lib::L2CValue::_L2CValue(aLStack816);
            lib::L2CValue::_L2CValue((L2CValue *)appvStack800);
LAB_71000299dc:
            pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x18cdc1683);
            lib::L2CValue::L2CValue(aLStack880,pLVar17);
            pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x1fbdb2615);
            lib::L2CValue::L2CValue(aLStack896,pLVar17);
            lib::L2CValue::L2CValue(aLStack912,aLStack608);
            FUN_71000270f0(aLStack864,this,aLStack880,aLStack896,aLStack912);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,aLStack864);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,aLStack848);
            lua2cpp::L2CFighterBase::Vector2__create
                      (this,(L2CValue)(cVar2 + -0x60),(L2CValue)(cVar2 + -0x70));
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack848);
            lib::L2CValue::_L2CValue(aLStack864);
            lib::L2CValue::_L2CValue(aLStack912);
            lib::L2CValue::_L2CValue(aLStack896);
            lib::L2CValue::_L2CValue(aLStack880);
            pLVar17 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x18cdc1683);
            pLVar19 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack384,0x1fbdb2615);
            pLVar14 = (L2CValue *)lib::L2CValue::operator__(aLStack768,0x18cdc1683);
            pLVar15 = (L2CValue *)lib::L2CValue::operator__(aLStack768,0x1fbdb2615);
            lib::L2CValue::L2CValue((L2CValue *)appvStack800,true);
            uVar9 = lib::L2CValue::as_number(pLVar17);
            uVar4 = lib::L2CValue::as_number(pLVar19);
            local_70 = (Hash40MapEntry **)(uVar9 & 0xffffffff | (ulong)uVar4 << 0x20);
            plStack104 = (lua_State *)0x0;
            uVar9 = lib::L2CValue::as_number(pLVar14);
            uVar4 = lib::L2CValue::as_number(pLVar15);
            local_80 = (void **)(uVar9 & 0xffffffff | (ulong)uVar4 << 0x20);
            plStack120 = (lua_State *)0x0;
            bVar3 = lib::L2CValue::as_bool((L2CValue *)appvStack800);
            pppvVar13 = &local_80;
            pvVar16 = (void *)app::lua_bind::GroundModule__ray_check_get_line_impl
                                        (*ppBVar21,(Vector2f *)&local_70,(Vector2f *)pppvVar13,
                                         (bool)(bVar3 & 1));
            if (pvVar16 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack784,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            }
            else {
              lib::L2CValue::L2CValue(aLStack784,pvVar16);
            }
            lib::L2CValue::operator_((L2CValue *)auStack640,aLStack784);
            lib::L2CValue::_L2CValue(aLStack784);
            lib::L2CValue::_L2CValue((L2CValue *)appvStack800);
            uVar9 = lib::L2CValue::operator__
                              ((L2CValue *)auStack640,(L2CValue *)&LUA_SCRIPT_LINE_SYSTEM_POST);
            if ((uVar9 & 1) != 0) {
LAB_7100029c24:
              lib::L2CValue::L2CValue(aLStack784,0xfea97fe73);
              lib::L2CValue::L2CValue((L2CValue *)appvStack800,0x15ec0d15a1);
              uVar9 = lib::L2CValue::as_integer(aLStack784);
              pppvVar13 = (void ***)lib::L2CValue::as_integer((L2CValue *)appvStack800);
              fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar21,uVar9,(ulong)pppvVar13);
              lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
              lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_80);
              lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_80);
              this_00 = appvStack800;
              goto LAB_7100029ca8;
            }
            pGVar18 = (GroundCollisionLine *)lib::L2CValue::as_pointer((L2CValue *)auStack640);
            bVar3 = app::sv_ground_collision_line::is_floor(pGVar18);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
            lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
            uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            if ((uVar9 & 1) != 0) goto LAB_7100029c24;
          }
          else {
            iVar5 = app::sv_information::stage_id();
            lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar5);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,_DAT_71005ea220);
            uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            if ((uVar9 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_DAT_71005ea204);
              uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              if ((uVar9 & 1) != 0) goto LAB_71000298d8;
              lib::L2CValue::L2CValue((L2CValue *)&local_70,_function_phase_init_for_ground);
              uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
              lib::L2CValue::_L2CValue((L2CValue *)&local_70);
              if ((uVar9 & 1) != 0) goto LAB_71000298d8;
              lib::L2CValue::L2CValue(aLStack832,false);
            }
            else {
LAB_71000298d8:
              lib::L2CValue::L2CValue(aLStack832,true);
            }
            lib::L2CValue::_L2CValue((L2CValue *)&local_80);
            lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
            uVar9 = lib::L2CValue::operator__(aLStack832,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            lib::L2CValue::_L2CValue(aLStack832);
            lib::L2CValue::_L2CValue(aLStack768);
            lib::L2CValue::_L2CValue(aLStack784);
            lib::L2CValue::_L2CValue(aLStack816);
            lib::L2CValue::_L2CValue((L2CValue *)appvStack800);
            if ((uVar9 & 1) == 0) goto LAB_71000299dc;
            lib::L2CValue::L2CValue(aLStack768,0xfea97fe73);
            lib::L2CValue::L2CValue(aLStack784,0x15ec0d15a1);
            uVar9 = lib::L2CValue::as_integer(aLStack768);
            pppvVar13 = (void ***)lib::L2CValue::as_integer(aLStack784);
            fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                      (*ppBVar21,uVar9,(ulong)pppvVar13);
            lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
            lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_80);
            lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
            lib::L2CValue::_L2CValue((L2CValue *)&local_70);
            this_00 = &local_80;
LAB_7100029ca8:
            lib::L2CValue::_L2CValue((L2CValue *)this_00);
            lib::L2CValue::_L2CValue(aLStack784);
          }
          lib::L2CValue::_L2CValue(aLStack768);
          lib::L2CValue::_L2CValue(aLStack752);
          lib::L2CValue::_L2CValue(aLStack736);
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack640 + 0x10));
      lib::L2CValue::_L2CValue(aLStack608);
    }
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
    pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
    fVar22 = (float)lib::L2CValue::as_number(pLVar17);
    fVar26 = (float)lib::L2CValue::as_number(pLVar19);
    bVar3 = app::sv_math::vec2_is_zero(fVar22,fVar26);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_70,true);
    uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack928,aLStack432);
      lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack928);
      lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x18cdc1683);
      lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      lib::L2CValue::operator_(pLVar17,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack432,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_80);
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
      lib::L2CValue::operator_(pLVar17,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      pLVar17 = aLStack192;
      lib::L2CValue::operator_((L2CValue *)&local_70,pLVar17);
      lib::L2CAgent::math_ceil((L2CAgent *)auStack640,pLVar17);
      lib::L2CValue::operator_(aLStack448,(L2CValue *)(auStack640 + 0x10));
      lib::L2CValue::operator_(aLStack448,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack640 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)auStack640);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    }
    else {
      lib::L2CValue::operator_(aLStack192,(L2CValue *)(auStack384 + 0x10));
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    this_01 = (L2CAgent *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    lib::L2CAgent::math_atan(this_01,pLVar17,(L2CValue *)pppvVar13);
    lib::L2CAgent::math_deg((L2CAgent *)&local_70,pLVar17);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    uVar9 = lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_70,360.0);
      lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::operator_((L2CValue *)&local_80,aLStack608);
      lib::L2CValue::_L2CValue(aLStack608);
    }
    lib::L2CValue::L2CValue(aLStack944,(L2CValue *)&local_80);
    FUN_7100024ab0(aLStack608,this,aLStack944);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar9 = lib::L2CValue::operator__(aLStack608,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue(aLStack944);
    if ((uVar9 & 1) != 0) {
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      uVar9 = lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar9 & 1) == 0) {
        pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        uVar9 = lib::L2CValue::operator_((L2CValue *)&local_70,pLVar17);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar9 & 1) == 0) goto LAB_710002a080;
        lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_70);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_70);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
LAB_710002a080:
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::operator_((L2CValue *)&local_80,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    fVar22 = (float)lib::L2CValue::as_number(aLStack608);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar21,fVar22,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_TRAIL_GENERATE_ARTICLE_LOCKONCURSOR);
    lib::L2CValue::L2CValue(aLStack608,_WEAPON_TRAIL_LOCKONCURSOR_INSTANCE_WORK_ID_INT_COUNT);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    iVar7 = lib::L2CValue::as_integer(aLStack448);
    iVar8 = lib::L2CValue::as_integer(aLStack608);
    app::lua_bind::ArticleModule__set_int_impl(*ppBVar21,iVar5,iVar7,iVar8);
    lib::L2CValue::_L2CValue(aLStack608);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    lib::L2CValue::_L2CValue(aLStack448);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue((L2CValue *)appvStack416);
    lib::L2CValue::_L2CValue(aLStack400);
    pppvVar13 = (void ***)auStack384;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_TRAIL_STATUS_SPECIAL_S_FLOAT_TARGET_ANGLE);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar22 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar21,iVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_80,fVar22);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)auStack384,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack400,0x13b363dc08);
    uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack384);
    uVar10 = lib::L2CValue::as_integer(aLStack400);
    fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar9,uVar10);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar22);
    pppvVar13 = &local_80;
    uVar9 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)pppvVar13);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack400);
      pLVar17 = (L2CValue *)auStack384;
LAB_710002949c:
      lib::L2CValue::_L2CValue(pLVar17);
    }
    else {
      lib::L2CValue::L2CValue(aLStack432,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack448,0x138f6ee351);
      uVar9 = lib::L2CValue::as_integer(aLStack432);
      uVar10 = lib::L2CValue::as_integer(aLStack448);
      fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar9,uVar10);
      lib::L2CValue::L2CValue((L2CValue *)appvStack416,fVar22);
      pppvVar13 = appvStack416;
      uVar9 = lib::L2CValue::operator__((L2CValue *)&local_80,(L2CValue *)pppvVar13);
      lib::L2CValue::_L2CValue((L2CValue *)appvStack416);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::_L2CValue((L2CValue *)auStack384);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack400,0xfea97fe73);
        lib::L2CValue::L2CValue((L2CValue *)appvStack416,0x13ddedc0c6);
        uVar9 = lib::L2CValue::as_integer(aLStack400);
        uVar10 = lib::L2CValue::as_integer((L2CValue *)appvStack416);
        fVar22 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar21,uVar9,uVar10);
        lib::L2CValue::L2CValue((L2CValue *)auStack384,fVar22);
        lib::L2CValue::operator_(aLStack192,(L2CValue *)auStack384);
        pppvVar13 = (void ***)&local_70;
        lib::L2CValue::operator_(aLStack192,(L2CValue *)pppvVar13);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        lib::L2CValue::_L2CValue((L2CValue *)auStack384);
        lib::L2CValue::_L2CValue((L2CValue *)appvStack416);
        pLVar17 = aLStack400;
        goto LAB_710002949c;
      }
    }
    lib::L2CAgent::math_rad((L2CAgent *)&local_80,(L2CValue *)pppvVar13);
    lib::L2CAgent::math_cos((L2CAgent *)auStack384,(L2CValue *)pppvVar13);
    lib::L2CValue::operator_(aLStack400,aLStack192);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
    puVar20 = &local_70;
    lib::L2CValue::operator_(pLVar17,(L2CValue *)puVar20);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CAgent::math_sin((L2CAgent *)auStack384,(L2CValue *)puVar20);
    lib::L2CValue::operator_(aLStack400,aLStack192);
    pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::L2CValue(aLStack464,(L2CValue *)&local_80);
    FUN_7100024ab0(aLStack400,this,aLStack464);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    uVar9 = lib::L2CValue::operator__(aLStack400,(L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack464);
    if ((uVar9 & 1) != 0) {
      pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      uVar9 = lib::L2CValue::operator_(pLVar17,(L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar9 & 1) == 0) {
        pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
        uVar9 = lib::L2CValue::operator_((L2CValue *)&local_70,pLVar17);
        lib::L2CValue::_L2CValue((L2CValue *)&local_70);
        if ((uVar9 & 1) == 0) goto LAB_710002964c;
        lib::L2CValue::L2CValue((L2CValue *)&local_70,1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_70);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
        lib::L2CValue::operator_((L2CValue *)(auStack384 + 0x10),(L2CValue *)&local_70);
      }
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
LAB_710002964c:
    lib::L2CValue::_L2CValue((L2CValue *)auStack384);
    pppvVar13 = &local_80;
  }
  lib::L2CValue::_L2CValue((L2CValue *)pppvVar13);
  uVar9 = lib::L2CValue::operator__((L2CValue *)(auStack384 + 0x10),aLStack352);
  if ((uVar9 & 1) == 0) {
    fVar22 = (float)lib::L2CValue::as_number((L2CValue *)(auStack384 + 0x10));
    app::lua_bind::PostureModule__set_lr_impl(*ppBVar21,fVar22);
    app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar21);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  pLVar17 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
  pLVar19 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar17);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar19);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
  app::sv_kinetic_energy::set_brake(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,-1.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack384,-1.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack384);
  app::sv_kinetic_energy::set_limit_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)auStack384);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,0.0);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_80);
  app::sv_kinetic_energy::set_accel(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack384 + 0x10));
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack192);
  lVar11 = -0xa0;
LAB_710002a370:
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack176,0xc6bb4b9c9);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  uVar10 = lib::L2CValue::as_integer(aLStack176);
  iVar5 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar21,uVar9,uVar10);
  lib::L2CValue::L2CValue((L2CValue *)&local_80,iVar5);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(*ppBVar21);
  lib::L2CValue::L2CValue(aLStack304,uVar4);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_80);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,0.01);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_70);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  fVar22 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::MotionModule__set_rate_impl(*ppBVar21,fVar22);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack304);
  FUN_7100022d80(this);
  lib::L2CValue::L2CValue(aLStack1040,&DAT_710002bd20);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack1040);
  lib::L2CValue::_L2CValue((L2CValue *)&local_80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

