
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038d00(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   L2CValue *param_5,L2CAgent *param_6,L2CValue *param_7)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FighterEntryID FVar11;
  ulong uVar12;
  Hash40 HVar13;
  ulong uVar14;
  long lVar15;
  L2CValue *pLVar16;
  L2CValue *pLVar17;
  BattleObjectModuleAccessor *pBVar18;
  AttackData *pAVar19;
  L2CAgent *this;
  code *pcVar20;
  AttackAbsoluteData *pAVar21;
  L2CValue *this_00;
  void *pvVar22;
  undefined8 *this_01;
  ulong *puVar23;
  BattleObjectModuleAccessor **ppBVar24;
  float fVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
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
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  undefined8 auStack512 [2];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  undefined local_1a0 [8];
  lua_State *plStack408;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  ulong local_150;
  ulong uStack328;
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
  undefined8 local_a0;
  lua_State *plStack152;
  
  bVar2 = lib::L2CValue::operator.cast.to.bool(param_7);
  if ((bVar2 & 1U) == 0) goto LAB_710003adbc;
  lib::L2CValue::L2CValue((L2CValue *)&local_150,-1.0);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_LIFE);
  fVar25 = (float)lib::L2CValue::as_number((L2CValue *)&local_150);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  ppBVar24 = &param_6->moduleAccessor;
  app::lua_bind::WorkModule__add_float_impl(*ppBVar24,fVar25,iVar6);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_LIFE);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  fVar25 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar24,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,fVar25);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0.0);
  uVar12 = lib::L2CValue::operator<=((L2CValue *)local_1a0,(L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x1cd6eecada);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
    app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar24,iVar6,HVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  }
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLOAT_LIFE);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
  fVar25 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar24,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,fVar25);
  lib::L2CValue::L2CValue(aLStack176,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack192,0x188e14d8f8);
  uVar12 = lib::L2CValue::as_integer(aLStack176);
  uVar14 = lib::L2CValue::as_integer(aLStack192);
  fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar24,uVar12,uVar14);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar25);
  uVar12 = lib::L2CValue::operator<=((L2CValue *)&local_150,(L2CValue *)&local_a0);
  if ((uVar12 & 1) == 0) {
    bVar3 = 0;
  }
  else {
    lib::L2CValue::L2CValue(aLStack240,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLAG_FLASH);
    iVar6 = lib::L2CValue::as_integer(aLStack240);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar24,iVar6);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar3 & 1));
    lib::L2CValue::operator!(aLStack224);
    bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack208);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
  }
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue(aLStack192);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  if ((bVar3 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_WORK_FLAG_FLASH)
    ;
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    app::lua_bind::WorkModule__on_flag_impl(*ppBVar24,iVar6);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_150,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_COUNT);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
  app::lua_bind::WorkModule__dec_int_impl(*ppBVar24,iVar6);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_a0,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_COUNT);
  iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar24,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar6);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0);
  uVar12 = lib::L2CValue::operator<=((L2CValue *)local_1a0,(L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  if ((uVar12 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_a0,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_ID);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
    lVar15 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar24,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,lVar15);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,0x14ec4f8ff4);
    uVar12 = lib::L2CValue::operator==((L2CValue *)local_1a0,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    if ((uVar12 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0x14ec4f8ff4);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar13 = lib::L2CValue::as_hash((L2CValue *)&local_150);
      bVar3 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
      bVar4 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
      bVar5 = lib::L2CValue::as_bool(aLStack176);
      iVar6 = app::lua_bind::SoundModule__play_se_impl
                        (*ppBVar24,HVar13,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1),
                         false,0);
      lib::L2CValue::L2CValue(aLStack448,iVar6);
      lib::L2CValue::~L2CValue(aLStack448);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0x14ec4f8ff4);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1a0,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_ID);
      lVar15 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar24,lVar15,iVar6);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0x149c257b7b);
      lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
      lib::L2CValue::L2CValue((L2CValue *)&local_a0,true);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar13 = lib::L2CValue::as_hash((L2CValue *)&local_150);
      bVar3 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
      bVar4 = lib::L2CValue::as_bool((L2CValue *)&local_a0);
      bVar5 = lib::L2CValue::as_bool(aLStack176);
      iVar6 = app::lua_bind::SoundModule__play_se_impl
                        (*ppBVar24,HVar13,(bool)(bVar3 & 1),(bool)(bVar4 & 1),(bool)(bVar5 & 1),
                         false,0);
      lib::L2CValue::L2CValue(aLStack432,iVar6);
      lib::L2CValue::~L2CValue(aLStack432);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
      lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,0x149c257b7b);
      lib::L2CValue::L2CValue
                ((L2CValue *)local_1a0,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_ID);
      lVar15 = lib::L2CValue::as_integer((L2CValue *)&local_150);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
      app::lua_bind::WorkModule__set_int64_impl(*ppBVar24,lVar15,iVar6);
    }
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_GAMEWATCH_OCTOPUS_SE_INTERVAL);
    lib::L2CValue::L2CValue
              ((L2CValue *)local_1a0,_WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_SE_COUNT);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    iVar7 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    app::lua_bind::WorkModule__set_int_impl(*ppBVar24,iVar6,iVar7);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  }
  fVar25 = (float)app::lua_bind::ControlModule__get_stick_y_impl(*ppBVar24);
  lib::L2CValue::L2CValue((L2CValue *)local_1a0,fVar25);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_6);
  puVar23 = &local_150;
  lib::L2CAgent::push_lua_stack(param_6,(L2CValue *)puVar23);
  fVar25 = (float)app::sv_kinetic_energy::get_speed_x(param_6->luaStateAgent);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar25);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CAgent::math_abs((L2CAgent *)local_1a0,(L2CValue *)puVar23);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,0.5);
  uVar12 = lib::L2CValue::operator<((L2CValue *)&local_150,aLStack192);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  if ((uVar12 & 1) == 0) {
    lVar15 = -0xb0;
LAB_71000394bc:
    lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar15));
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_CONTROL_PAD_BUTTON_CSTICK_ON);
    iVar6 = lib::L2CValue::as_integer(aLStack224);
    bVar3 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar24,iVar6);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar3 & 1));
    lib::L2CValue::operator!(aLStack208);
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack240,0xdec0a3c43);
      lib::L2CValue::L2CValue(aLStack256,0x113a0baf59);
      uVar12 = lib::L2CValue::as_integer(aLStack240);
      uVar14 = lib::L2CValue::as_integer(aLStack256);
      fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar24,uVar12,uVar14);
      lib::L2CValue::L2CValue(aLStack224,fVar25);
      lib::L2CValue::operator*((L2CValue *)local_1a0,aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&local_150,10.0);
      lib::L2CValue::operator*(aLStack208,(L2CValue *)&local_150);
      lib::L2CValue::~L2CValue((L2CValue *)&local_150);
      lib::L2CValue::operator=(aLStack176,aLStack192);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack256);
      lVar15 = -0xe0;
      goto LAB_71000394bc;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  lib::L2CAgent::clear_lua_stack(param_6);
  lib::L2CAgent::push_lua_stack(param_6,(L2CValue *)&local_150);
  lib::L2CAgent::push_lua_stack(param_6,(L2CValue *)&local_a0);
  lib::L2CAgent::push_lua_stack(param_6,aLStack176);
  app::sv_kinetic_energy::set_speed(param_6->luaStateAgent);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  pLVar16 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_6[2].battleObject,9);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_GAMEWATCH_OCTOPUS_STATUS_KIND_ATTACK);
  uVar12 = lib::L2CValue::operator==(pLVar16,(L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  if ((uVar12 & 1) == 0) goto LAB_710003adbc;
  uVar26 = app::WeaponSpecializer_PikachuVortex::get_camera_clip_bounds();
  local_150 = CONCAT44(param_2,uVar26);
  uStack328 = CONCAT44(param_4,param_3);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_150);
  lib::L2CValue::L2CValue((L2CValue *)&local_150,2);
  lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
  FUN_710003bec0(aLStack176,param_6,local_1a0,&local_150,&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
  lib::L2CValue::~L2CValue((L2CValue *)&local_150);
  lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
  if ((bVar2 & 1U) == 0) {
    lib::L2CAgent::clear_lua_stack(param_6);
    uVar26 = app::sv_camera_manager::dead_range(param_6->luaStateAgent);
    local_150 = CONCAT44(param_2,uVar26);
    uStack328 = CONCAT44(param_4,param_3);
    app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_150);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,2);
    lib::L2CValue::L2CValue((L2CValue *)&local_a0,2);
    FUN_710003bec0(aLStack192,param_6,local_1a0,&local_150,&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack192);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    if ((bVar2 & 1U) != 0) goto LAB_7100039670;
    iVar6 = app::lua_bind::FighterManager__entry_count_impl(LUA_SCRIPT_LINE_MAP_CORRECTION);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,2);
    lib::L2CValue::operator*((L2CValue *)local_1a0,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,1);
    lib::L2CValue::operator-((L2CValue *)auStack512,(L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    if (-1 < iVar6) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue
                  ((L2CValue *)local_1a0,
                   iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_IGNORE_OBJECT_0);
        iVar8 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar24,iVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
        lib::L2CValue::~L2CValue((L2CValue *)&local_150);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    ((L2CValue *)&local_a0,
                     iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_IGNORE_OBJECT_FRMAE_0);
          iVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
          iVar8 = app::lua_bind::WorkModule__get_int_impl(*ppBVar24,iVar8);
          lib::L2CValue::L2CValue(aLStack176,iVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_150,0);
          uVar12 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_150);
          lib::L2CValue::~L2CValue((L2CValue *)&local_150);
          if ((uVar12 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_150,0);
            uVar12 = lib::L2CValue::operator<(aLStack176,(L2CValue *)&local_150);
            lib::L2CValue::~L2CValue((L2CValue *)&local_150);
            if ((uVar12 & 1) == 0) {
              iVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              bVar3 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar24,iVar8,0);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue(aLStack528,iVar7);
                lib::L2CValue::L2CValue(aLStack544,false);
                FUN_7100038310(param_6,aLStack528,aLStack544);
                lib::L2CValue::~L2CValue(aLStack544);
                lib::L2CValue::~L2CValue(aLStack528);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack192,0xdec0a3c43);
              lib::L2CValue::L2CValue(aLStack208,0x10bbfdd32c);
              uVar12 = lib::L2CValue::as_integer(aLStack192);
              uVar14 = lib::L2CValue::as_integer(aLStack208);
              iVar8 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar24,uVar12,uVar14);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,iVar8);
              lib::L2CValue::operator=(aLStack176,(L2CValue *)&local_150);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack192);
              iVar8 = lib::L2CValue::as_integer(aLStack176);
              iVar9 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar24,iVar8,iVar9);
            }
          }
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
        }
        lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
        bVar2 = iVar7 < iVar6;
        iVar7 = iVar7 + 1;
      } while (bVar2);
    }
    lib::L2CValue::L2CValue(aLStack560,_WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE);
    iVar6 = _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE;
    if (0 < _WEAPON_GAMEWATCH_OCTOPUS_LEG_SIZE) {
      iVar7 = 0;
      do {
        lib::L2CValue::L2CValue
                  (aLStack576,
                   iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_CATCH_OBJECT_LEG_A);
        lib::L2CValue::L2CValue
                  (aLStack592,iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_FLAG_FIX_LEG_A);
        lib::L2CValue::L2CValue
                  (aLStack608,
                   iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID_LEG_A);
        lib::L2CValue::L2CValue
                  (aLStack624,
                   iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_DISABLE_FRAME_LEG_A)
        ;
        lib::L2CValue::L2CValue
                  (aLStack640,
                   iVar7 + _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_CATCH_DAMAGE_FRAME_LEG_A);
        iVar8 = lib::L2CValue::as_integer(aLStack576);
        bVar3 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar24,iVar8);
        lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
        lib::L2CValue::~L2CValue((L2CValue *)&local_150);
        if ((bVar2 & 1U) == 0) {
LAB_710003ad70:
          iVar8 = 0;
        }
        else {
          iVar8 = lib::L2CValue::as_integer(aLStack608);
          iVar8 = app::lua_bind::WorkModule__get_int_impl(*ppBVar24,iVar8);
          lib::L2CValue::L2CValue(aLStack656,iVar8);
          lib::L2CValue::L2CValue((L2CValue *)&local_150,0x50000000);
          uVar12 = lib::L2CValue::operator==(aLStack656,(L2CValue *)&local_150);
          lib::L2CValue::~L2CValue((L2CValue *)&local_150);
          if ((uVar12 & 1) == 0) {
            uVar27 = lib::L2CValue::as_integer(aLStack656);
            bVar3 = app::sv_battle_object::is_active(uVar27);
            lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
            if ((bVar2 & 1U) == 0) {
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              goto LAB_710003ad60;
            }
            uVar27 = lib::L2CValue::as_integer(aLStack656);
            bVar3 = app::sv_battle_object::is_null(uVar27);
            lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar3 & 1));
            lib::L2CValue::operator!((L2CValue *)&local_a0);
            bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)local_1a0);
            lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_150);
            if ((bVar2 & 1U) == 0) goto LAB_710003ad60;
            uVar27 = lib::L2CValue::as_integer(aLStack656);
            pvVar22 = (void *)app::sv_battle_object::module_accessor(uVar27);
            if (pvVar22 == (void *)0x0) {
              lib::L2CValue::L2CValue(aLStack672,(L2CValue *)&LUA_SCRIPT_LINE_STATUS_SHIFT);
            }
            else {
              lib::L2CValue::L2CValue(aLStack672,pvVar22);
            }
            lib::L2CValue::L2CValue(aLStack688,iVar7);
            lib::L2CValue::L2CValue(aLStack704,aLStack672);
            pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack704);
            iVar8 = app::lua_bind::StatusModule__status_kind_impl(pBVar18);
            lib::L2CValue::L2CValue(aLStack176,iVar8);
            lib::L2CValue::L2CValue
                      ((L2CValue *)&local_a0,_FIGHTER_STATUS_KIND_CAPTURE_PULLED_OCTOPUS);
            uVar12 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_a0);
            lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
            lib::L2CValue::~L2CValue(aLStack176);
            cVar1 = (char)&stack0xfffffffffffffff0;
            if ((uVar12 & 1) == 0) {
              iVar8 = lib::L2CValue::as_integer(aLStack688);
              HVar13 = app::lua_bind::GrabModule__node_impl(*ppBVar24,iVar8);
              lib::L2CValue::L2CValue(aLStack192,HVar13);
              lib::L2CValue::L2CValue(aLStack208,0);
              lib::L2CValue::L2CValue(aLStack224,0);
              lib::L2CValue::L2CValue(aLStack240,0);
              lib::L2CValue::L2CValue(aLStack256,true);
              HVar13 = lib::L2CValue::as_hash(aLStack192);
              uVar12 = lib::L2CValue::as_number(aLStack208);
              lVar15 = lib::L2CValue::as_number(aLStack224);
              uVar27 = lib::L2CValue::as_number(aLStack240);
              local_a0 = (void **)(uVar12 & 0xffffffff | lVar15 << 0x20);
              plStack152 = (lua_State *)(ulong)uVar27;
              bVar3 = lib::L2CValue::as_bool(aLStack256);
              app::lua_bind::ModelModule__joint_global_position_impl
                        (*ppBVar24,HVar13,(Vector3f *)&local_a0,(bool)(bVar3 & 1));
              lib::L2CValue::L2CValue((L2CValue *)&local_150,(float)local_a0);
              lib::L2CValue::L2CValue(aLStack320,local_a0._4_4_);
              lib::L2CValue::L2CValue(aLStack304,plStack152._0_4_);
              FUN_710001de50(aLStack176,param_6,&local_150);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack224);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::L2CValue(aLStack208,0x31d39a761);
              lib::L2CValue::L2CValue(aLStack224,0);
              lib::L2CValue::L2CValue(aLStack240,0);
              lib::L2CValue::L2CValue(aLStack256,0);
              lib::L2CValue::L2CValue(aLStack272,false);
              HVar13 = lib::L2CValue::as_hash(aLStack208);
              uVar12 = lib::L2CValue::as_number(aLStack224);
              lVar15 = lib::L2CValue::as_number(aLStack240);
              uVar27 = lib::L2CValue::as_number(aLStack256);
              local_a0 = (void **)(uVar12 & 0xffffffff | lVar15 << 0x20);
              plStack152 = (lua_State *)(ulong)uVar27;
              bVar3 = lib::L2CValue::as_bool(aLStack272);
              pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack704);
              app::lua_bind::ModelModule__joint_global_position_impl
                        (pBVar18,HVar13,(Vector3f *)&local_a0,(bool)(bVar3 & 1));
              lib::L2CValue::L2CValue((L2CValue *)local_1a0,(float)local_a0);
              lib::L2CValue::L2CValue(aLStack400,local_a0._4_4_);
              lib::L2CValue::L2CValue(aLStack384,plStack152._0_4_);
              FUN_710001de50(aLStack192,param_6,local_1a0);
              lib::L2CValue::~L2CValue(aLStack384);
              lib::L2CValue::~L2CValue(aLStack400);
              lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack224);
              lib::L2CValue::~L2CValue(aLStack208);
              pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack176,0x162d277af);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
              lib::L2CValue::operator=(pLVar16,(L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x162d277af);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,0.0);
              lib::L2CValue::operator=(pLVar16,(L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::L2CValue(aLStack224,aLStack176);
              lib::L2CValue::L2CValue(aLStack240,aLStack192);
              lua2cpp::L2CFighterBase::Vector3__distance
                        (param_6,(L2CValue)(cVar1 + '0'),(L2CValue)(cVar1 + ' '));
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack224);
              lib::L2CValue::L2CValue(aLStack288,0xdec0a3c43);
              lib::L2CValue::L2CValue(aLStack352,0x12ac3f4b89);
              uVar12 = lib::L2CValue::as_integer(aLStack288);
              uVar14 = lib::L2CValue::as_integer(aLStack352);
              fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                        (*ppBVar24,uVar12,uVar14);
              lib::L2CValue::L2CValue(aLStack272,fVar25);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,10.0);
              lib::L2CValue::operator*(aLStack272,(L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              bVar3 = lib::L2CValue::operator<=(aLStack256,aLStack208);
              lib::L2CValue::L2CValue(aLStack368,(bool)(bVar3 & 1));
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack352);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack176);
            }
            else {
              lib::L2CValue::L2CValue(aLStack368,false);
            }
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack368);
            lib::L2CValue::~L2CValue(aLStack368);
            lib::L2CValue::~L2CValue(aLStack704);
            lib::L2CValue::~L2CValue(aLStack688);
            if ((bVar2 & 1U) == 0) {
              iVar8 = lib::L2CValue::as_integer(aLStack640);
              bVar3 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar24,iVar8,0);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              if ((bVar2 & 1U) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)local_1a0,0xdec0a3c43);
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,0x15e06bcc20);
                uVar12 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
                uVar14 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
                iVar8 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar24,uVar12,uVar14);
                lib::L2CValue::L2CValue((L2CValue *)&local_150,iVar8);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,0xdec0a3c43);
                lib::L2CValue::L2CValue(aLStack176,0x12a75d3e2e);
                uVar12 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
                uVar14 = lib::L2CValue::as_integer(aLStack176);
                fVar25 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                          (*ppBVar24,uVar12,uVar14);
                lib::L2CValue::L2CValue((L2CValue *)local_1a0,fVar25);
                lib::L2CValue::~L2CValue(aLStack176);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                uVar27 = app::lua_bind::TeamModule__team_owner_id_impl(*ppBVar24);
                lib::L2CValue::L2CValue(aLStack176,uVar27);
                uVar27 = lib::L2CValue::as_integer(aLStack176);
                uVar28 = lib::L2CValue::as_integer(aLStack656);
                fVar25 = (float)lib::L2CValue::as_number((L2CValue *)local_1a0);
                fVar25 = (float)app::FighterUtil::calc_add_damage_power_for_final
                                          (uVar27,uVar28,fVar25);
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,fVar25);
                lib::L2CValue::operator=((L2CValue *)local_1a0,(L2CValue *)&local_a0);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                lib::L2CValue::~L2CValue(aLStack176);
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
                fVar25 = (float)lib::L2CValue::as_number((L2CValue *)local_1a0);
                iVar8 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
                pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack672);
                app::lua_bind::DamageModule__add_damage_impl(pBVar18,fVar25,iVar8);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                iVar8 = lib::L2CValue::as_integer((L2CValue *)&local_150);
                iVar9 = lib::L2CValue::as_integer(aLStack640);
                app::lua_bind::WorkModule__set_int_impl(*ppBVar24,iVar8,iVar9);
                lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
                lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              }
              iVar8 = 0;
            }
            else {
              lib::L2CValue::L2CValue(aLStack720,iVar7);
              lib::L2CValue::L2CValue(aLStack736,aLStack656);
              lib::L2CValue::L2CValue(aLStack752,aLStack672);
              uVar27 = lib::L2CValue::as_integer(aLStack736);
              uVar27 = app::sv_battle_object::kind(uVar27);
              lib::L2CValue::L2CValue((L2CValue *)local_1a0,uVar27);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,_FIGHTER_HIT_TARGET_MIDDLE);
              iVar8 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
              iVar9 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              iVar8 = app::lua_bind::FighterParamAccessor2__hit_target_no_impl
                                (FIGHTER_STATUS_KIND_JUMP_SQUAT,iVar8,iVar9);
              lib::L2CValue::L2CValue(aLStack224,iVar8);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
              iVar8 = lib::L2CValue::as_integer(aLStack720);
              HVar13 = app::lua_bind::GrabModule__node_impl(*ppBVar24,iVar8);
              lib::L2CValue::L2CValue(aLStack240,HVar13);
              lib::L2CValue::L2CValue(aLStack256,_WEAPON_GAMEWATCH_OCTOPUS_ATTACK_ABSOLUTE_KIND_LEG)
              ;
              lib::L2CValue::L2CValue((L2CValue *)local_1a0,true);
              iVar8 = lib::L2CValue::as_integer(aLStack256);
              bVar3 = lib::L2CValue::as_bool((L2CValue *)local_1a0);
              pAVar19 = (AttackData *)
                        app::lua_bind::AttackModule__attack_data_impl
                                  (*ppBVar24,iVar8,(bool)(bVar3 & 1));
              app::lua_bind::AttackData__store_l2c_table_impl(pAVar19);
              lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
              lib::L2CValue::L2CValue(aLStack176,0);
              lib::L2CValue::L2CValue(aLStack192,0);
              HVar13 = lib::L2CValue::as_hash(aLStack240);
              uVar12 = lib::L2CValue::as_number((L2CValue *)&local_a0);
              lVar15 = lib::L2CValue::as_number(aLStack176);
              uVar27 = lib::L2CValue::as_number(aLStack192);
              local_1a0 = (void **)(uVar12 & 0xffffffff | lVar15 << 0x20);
              plStack408 = (lua_State *)(ulong)uVar27;
              app::lua_bind::ModelModule__joint_global_position_impl
                        (*ppBVar24,HVar13,(Vector3f *)local_1a0,true);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,local_1a0._0_4_);
              lib::L2CValue::L2CValue(aLStack320,local_1a0._4_4_);
              lib::L2CValue::L2CValue(aLStack304,plStack408._0_4_);
              FUN_710001de50(aLStack288,param_6,&local_150);
              lib::L2CValue::~L2CValue(aLStack304);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::L2CValue(aLStack368,aLStack752);
              lib::L2CValue::L2CValue(aLStack176,_GROUND_TOUCH_FLAG_ALL);
              uVar27 = lib::L2CValue::as_integer(aLStack176);
              pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack368);
              bVar3 = app::lua_bind::GroundModule__is_touch_impl(pBVar18,uVar27);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,(bool)(bVar3 & 1));
              bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue(aLStack176);
              if ((bVar2 & 1U) == 0) {
                lib::L2CValue::L2CValue(aLStack352,0x5a);
              }
              else {
                lib::L2CValue::L2CValue(aLStack208,_GROUND_TOUCH_FLAG_ALL);
                uVar27 = lib::L2CValue::as_integer(aLStack208);
                pBVar18 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(aLStack368);
                uVar29 = app::lua_bind::GroundModule__get_touch_normal_impl(pBVar18,uVar27);
                lib::L2CValue::L2CValue((L2CValue *)local_1a0,(float)uVar29);
                lib::L2CValue::L2CValue(aLStack400,(float)((ulong)uVar29 >> 0x20));
                lib::L2CValue::L2CValue((L2CValue *)&local_a0,(L2CValue *)local_1a0);
                lib::L2CValue::L2CValue(aLStack176,aLStack400);
                pLVar17 = aLStack176;
                lua2cpp::L2CFighterBase::Vector2__create
                          (param_6,(L2CValue)(cVar1 + 'p'),SUB81(pLVar17,0));
                lib::L2CValue::~L2CValue(aLStack176);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                lib::L2CValue::~L2CValue(aLStack400);
                lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
                lib::L2CValue::~L2CValue(aLStack208);
                this = (L2CAgent *)lib::L2CValue::operator[](aLStack192,0x1fbdb2615);
                pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack192,0x18cdc1683);
                lib::L2CAgent::math_atan(this,pLVar16,pLVar17);
                lib::L2CAgent::math_deg((L2CAgent *)&local_a0,pLVar16);
                lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
                lib::L2CValue::~L2CValue(aLStack192);
              }
              pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x7d57445dc);
              lib::L2CValue::operator=(pLVar16,aLStack352);
              lib::L2CValue::~L2CValue(aLStack352);
              lib::L2CValue::~L2CValue(aLStack368);
              lib::L2CValue::L2CValue((L2CValue *)local_1a0,0);
              iVar8 = lib::L2CValue::as_integer(aLStack256);
              iVar9 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
              pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack272,0x11f63699bf);
              pcVar20 = (code *)lib::L2CValue::as_pointer(pLVar16);
              pAVar21 = (AttackAbsoluteData *)(*pcVar20)();
              app::lua_bind::AttackAbsoluteData__load_from_l2c_table_impl(pAVar21,aLStack272);
              app::lua_bind::AttackModule__set_absolute_impl(*ppBVar24,iVar8,iVar9,pAVar21);
              operator.delete(pAVar21);
              lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
              pLVar16 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x18cdc1683);
              pLVar17 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x1fbdb2615);
              this_00 = (L2CValue *)lib::L2CValue::operator[](aLStack288,0x162d277af);
              lib::L2CValue::L2CValue((L2CValue *)&local_a0,0);
              iVar8 = lib::L2CValue::as_integer(aLStack256);
              uVar27 = lib::L2CValue::as_integer(aLStack736);
              uVar12 = lib::L2CValue::as_number(pLVar16);
              lVar15 = lib::L2CValue::as_number(pLVar17);
              uVar28 = lib::L2CValue::as_number(this_00);
              local_1a0 = (void **)(uVar12 & 0xffffffff | lVar15 << 0x20);
              plStack408 = (lua_State *)(ulong)uVar28;
              iVar9 = lib::L2CValue::as_integer((L2CValue *)&local_a0);
              iVar10 = lib::L2CValue::as_integer(aLStack224);
              app::lua_bind::AttackModule__hit_absolute_impl
                        (*ppBVar24,iVar8,uVar27,(Vector3f *)local_1a0,iVar9,iVar10);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue(aLStack288);
              lib::L2CValue::~L2CValue(aLStack272);
              lib::L2CValue::~L2CValue(aLStack256);
              lib::L2CValue::~L2CValue(aLStack240);
              lib::L2CValue::~L2CValue(aLStack224);
              lib::L2CValue::~L2CValue(aLStack752);
              lib::L2CValue::~L2CValue(aLStack736);
              lib::L2CValue::~L2CValue(aLStack720);
              lib::L2CValue::L2CValue(aLStack768,aLStack656);
              uVar27 = lib::L2CValue::as_integer(aLStack768);
              iVar8 = app::sv_battle_object::entry_id(uVar27);
              lib::L2CValue::L2CValue((L2CValue *)local_1a0,iVar8);
              FVar11 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
              iVar8 = app::lua_bind::FighterManager__get_entry_no_impl
                                (LUA_SCRIPT_LINE_MAP_CORRECTION,FVar11);
              lib::L2CValue::L2CValue(aLStack176,iVar8);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,2);
              lib::L2CValue::operator*(aLStack176,(L2CValue *)&local_150);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue(aLStack176);
              uVar27 = lib::L2CValue::as_integer(aLStack768);
              bVar3 = app::sv_battle_object::is_sub_fighter(uVar27);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar3 & 1));
              lib::L2CValue::L2CValue((L2CValue *)&local_150,true);
              uVar12 = lib::L2CValue::operator==(aLStack176,(L2CValue *)&local_150);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              lib::L2CValue::~L2CValue(aLStack176);
              if ((uVar12 & 1) != 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_150,1);
                lib::L2CValue::operator+((L2CValue *)&local_a0,(L2CValue *)&local_150);
                lib::L2CValue::~L2CValue((L2CValue *)&local_150);
                lib::L2CValue::operator=((L2CValue *)&local_a0,aLStack176);
                lib::L2CValue::~L2CValue(aLStack176);
              }
              lib::L2CValue::L2CValue(aLStack176,-1);
              lib::L2CValue::L2CValue
                        ((L2CValue *)&local_150,
                         _WEAPON_GAMEWATCH_OCTOPUS_INSTANCE_WORK_ID_INT_IGNORE_OBJECT_FRMAE_0);
              lib::L2CValue::operator+((L2CValue *)&local_150,(L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              iVar8 = lib::L2CValue::as_integer(aLStack176);
              iVar9 = lib::L2CValue::as_integer(aLStack192);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar24,iVar8,iVar9);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue((L2CValue *)&local_a0);
              lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
              lib::L2CValue::~L2CValue(aLStack768);
              lib::L2CValue::L2CValue((L2CValue *)&local_150,0x50000000);
              iVar8 = lib::L2CValue::as_integer((L2CValue *)&local_150);
              iVar9 = lib::L2CValue::as_integer(aLStack608);
              app::lua_bind::WorkModule__set_int_impl(*ppBVar24,iVar8,iVar9);
              lib::L2CValue::~L2CValue((L2CValue *)&local_150);
              iVar8 = lib::L2CValue::as_integer(aLStack576);
              app::lua_bind::WorkModule__off_flag_impl(*ppBVar24,iVar8);
              iVar8 = 5;
            }
            lib::L2CValue::~L2CValue(aLStack672);
            if (iVar8 == 0) goto LAB_710003ad60;
          }
          else {
            iVar8 = lib::L2CValue::as_integer(aLStack624);
            bVar3 = app::lua_bind::WorkModule__count_down_int_impl(*ppBVar24,iVar8,0);
            lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
            bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
            lib::L2CValue::~L2CValue((L2CValue *)&local_150);
            if ((bVar2 & 1U) != 0) {
              iVar8 = lib::L2CValue::as_integer(aLStack576);
              app::lua_bind::WorkModule__off_flag_impl(*ppBVar24,iVar8);
            }
LAB_710003ad60:
            iVar8 = 0;
          }
          lib::L2CValue::~L2CValue(aLStack656);
          if (iVar8 == 0) goto LAB_710003ad70;
        }
        lib::L2CValue::~L2CValue(aLStack640);
        lib::L2CValue::~L2CValue(aLStack624);
        lib::L2CValue::~L2CValue(aLStack608);
        lib::L2CValue::~L2CValue(aLStack592);
        lib::L2CValue::~L2CValue(aLStack576);
      } while ((iVar8 == 0) && (iVar7 = iVar7 + 1, iVar7 < iVar6));
    }
    lib::L2CValue::~L2CValue(aLStack560);
    this_01 = auStack512;
  }
  else {
    lib::L2CValue::~L2CValue(aLStack176);
LAB_7100039670:
    lib::L2CValue::L2CValue((L2CValue *)&local_150,_WEAPON_LINK_NO_CONSTRAINT);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x1cd6eecada);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
    app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar24,iVar6,HVar13);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,LINK_NO_CAPTURE);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)local_1a0);
    bVar3 = app::lua_bind::LinkModule__is_linked_impl(*ppBVar24,iVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_150,(bool)(bVar3 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    if ((bVar2 & 1U) == 0) goto LAB_710003adbc;
    lib::L2CValue::L2CValue((L2CValue *)&local_150,LINK_NO_CAPTURE);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0x1ddd9ffc40);
    iVar6 = lib::L2CValue::as_integer((L2CValue *)&local_150);
    HVar13 = lib::L2CValue::as_hash((L2CValue *)local_1a0);
    app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar24,iVar6,HVar13,0);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    uVar29 = app::lua_bind::GroundModule__get_center_pos_impl(*ppBVar24);
    lib::L2CValue::L2CValue(aLStack480,(float)uVar29);
    lib::L2CValue::L2CValue(aLStack464,(float)((ulong)uVar29 >> 0x20));
    lib::L2CValue::L2CValue((L2CValue *)&local_150,aLStack480);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,aLStack464);
    lua2cpp::L2CFighterBase::Vector2__create(param_6,(L2CValue)0xb0,(L2CValue)0x60);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::~L2CValue((L2CValue *)&local_150);
    lib::L2CValue::~L2CValue(aLStack464);
    lib::L2CValue::~L2CValue(aLStack480);
    fVar25 = (float)app::lua_bind::GroundModule__get_z_impl(*ppBVar24);
    lib::L2CValue::L2CValue(aLStack176,fVar25);
    pLVar16 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
    pLVar17 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0);
    lib::L2CValue::L2CValue(aLStack208,true);
    uVar12 = lib::L2CValue::as_number(pLVar16);
    lVar15 = lib::L2CValue::as_number(pLVar17);
    uVar27 = lib::L2CValue::as_number(aLStack176);
    local_150 = uVar12 & 0xffffffff | lVar15 << 0x20;
    uStack328 = (ulong)uVar27;
    fVar25 = (float)lib::L2CValue::as_number((L2CValue *)local_1a0);
    bVar3 = lib::L2CValue::as_bool(aLStack208);
    fVar25 = (float)app::lua_bind::EffectModule__get_dead_effect_rot_z_impl
                              (*ppBVar24,(Vector3f *)&local_150,fVar25,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack192,fVar25);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    pLVar16 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
    pLVar17 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
    lib::L2CValue::L2CValue((L2CValue *)local_1a0,0);
    lib::L2CValue::L2CValue(aLStack224,true);
    uVar12 = lib::L2CValue::as_number(pLVar16);
    lVar15 = lib::L2CValue::as_number(pLVar17);
    uVar27 = lib::L2CValue::as_number(aLStack176);
    local_150 = uVar12 & 0xffffffff | lVar15 << 0x20;
    uStack328 = (ulong)uVar27;
    fVar25 = (float)lib::L2CValue::as_number((L2CValue *)local_1a0);
    bVar3 = lib::L2CValue::as_bool(aLStack224);
    fVar25 = (float)app::lua_bind::EffectModule__get_dead_effect_scale_impl
                              (*ppBVar24,(Vector3f *)&local_150,fVar25,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue(aLStack208,fVar25);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue((L2CValue *)local_1a0);
    lib::L2CValue::L2CValue(aLStack224,0x8c5996daf);
    pLVar16 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x18cdc1683);
    pLVar17 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&local_a0,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack240,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack288,-1);
    HVar13 = lib::L2CValue::as_hash(aLStack224);
    uVar12 = lib::L2CValue::as_number(pLVar16);
    lVar15 = lib::L2CValue::as_number(pLVar17);
    uVar27 = lib::L2CValue::as_number(aLStack176);
    local_150 = uVar12 & 0xffffffff | lVar15 << 0x20;
    uStack328 = (ulong)uVar27;
    uVar12 = lib::L2CValue::as_number(aLStack240);
    lVar15 = lib::L2CValue::as_number(aLStack256);
    uVar27 = lib::L2CValue::as_number(aLStack192);
    local_1a0 = (void **)(uVar12 & 0xffffffff | lVar15 << 0x20);
    plStack408 = (lua_State *)(ulong)uVar27;
    fVar25 = (float)lib::L2CValue::as_number(aLStack208);
    uVar27 = lib::L2CValue::as_integer(aLStack272);
    iVar6 = lib::L2CValue::as_integer(aLStack288);
    uVar27 = app::lua_bind::EffectModule__req_impl
                       (*ppBVar24,HVar13,(Vector3f *)&local_150,(Vector3f *)local_1a0,fVar25,uVar27,
                        iVar6,false,0);
    lib::L2CValue::L2CValue(aLStack496,uVar27);
    lib::L2CValue::~L2CValue(aLStack496);
    lib::L2CValue::~L2CValue(aLStack288);
    lib::L2CValue::~L2CValue(aLStack272);
    lib::L2CValue::~L2CValue(aLStack256);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack176);
    this_01 = &local_a0;
  }
  lib::L2CValue::~L2CValue((L2CValue *)this_01);
LAB_710003adbc:
  lib::L2CValue::L2CValue(param_5,0);
  return;
}

