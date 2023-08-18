
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPurin::status::SpecialNRoll_init(L2CFighterPurin *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  L2CValue *pLVar6;
  void *pvVar7;
  ulong uVar8;
  KineticEnergy *pKVar9;
  KineticEnergyNormal *pKVar10;
  ulong *this_01;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  ulong uVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  long lVar16;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong auStack208 [2];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  undefined8 uStack88;
  
  ppBVar14 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__prev_status_kind_impl(*ppBVar14,0);
  lib::L2CValue::L2CValue(aLStack128,iVar3);
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar4 = lib::L2CValue::as_integer(pLVar6);
  uVar4 = app::sv_battle_object::kind(uVar4);
  lib::L2CValue::L2CValue(aLStack144,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar7 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack160,pvVar7);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KIND_KIRBY);
  uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_TURN);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_KIND_SPECIAL_N_ROLL_AIR);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_TURN);
    lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_KIRBY_STATUS_KIND_PURIN_SPECIAL_N_ROLL_AIR);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_60);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  uVar8 = lib::L2CValue::operator__(aLStack128,aLStack176);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack208);
    uVar8 = lib::L2CValue::operator__(aLStack128,aLStack192);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar15);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::operator_((L2CValue *)&local_60,(L2CValue *)&local_70);
      lib::L2CValue::operator_((L2CValue *)auStack208,aLStack256);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar15);
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      iVar3 = lib::L2CValue::as_integer(aLStack288);
      fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
      lib::L2CValue::L2CValue(aLStack272,fVar15);
      lib::L2CValue::operator_((L2CValue *)&local_70,aLStack272);
      lib::L2CValue::operator_((L2CValue *)auStack208,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xef6bd15eb);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
      lib::L2CValue::L2CValue(aLStack256,true);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      bVar1 = lib::L2CValue::as_bool(aLStack256);
      app::lua_bind::ControlModule__set_rumble_impl
                (*ppBVar14,HVar12,iVar3,(bool)(bVar1 & 1),0x50000000);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue(aLStack256,ENERGY_STOP_RESET_TYPE_GROUND);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    lib::L2CValue::L2CValue(aLStack288,0.0);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar3 = lib::L2CValue::as_integer(aLStack256);
    uVar8 = lib::L2CValue::as_number((L2CValue *)auStack208);
    uVar4 = lib::L2CValue::as_number(aLStack272);
    local_60 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack88 = 0;
    uVar8 = lib::L2CValue::as_number(aLStack288);
    lVar16 = lib::L2CValue::as_number(aLStack304);
    uVar4 = lib::L2CValue::as_number(aLStack320);
    local_70 = uVar8 & 0xffffffff | lVar16 << 0x20;
    uStack104 = (ulong)uVar4;
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__reset_energy_impl
              (pKVar9,iVar3,(Vector2f *)&local_60,(Vector3f *)&local_70,pBVar11);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack88 = 0;
    pKVar10 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar10,(Vector2f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack88 = 0;
    pKVar10 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar10,(Vector2f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack88 = 0;
    pKVar10 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar10,(Vector2f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,-1.0);
    lib::L2CValue::L2CValue(aLStack256,-1.0);
    uVar8 = lib::L2CValue::as_number((L2CValue *)&local_70);
    uVar4 = lib::L2CValue::as_number(aLStack256);
    local_60 = uVar8 & 0xffffffff | (ulong)uVar4 << 0x20;
    uStack88 = 0;
    pKVar10 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar10,(Vector2f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__on_consider_ground_friction_impl(pKVar9);
    pKVar9 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack160);
    app::lua_bind::KineticEnergy__enable_impl(pKVar9);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
    app::KineticUtility::clear_unable_energy(iVar3,pBVar11);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    this_01 = auStack208;
  }
  else {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar15);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_70);
      app::lua_bind::PostureModule__set_lr_impl(*ppBVar14,fVar15);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack208,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
      fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack208,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_ATTACK_COUNT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar5 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
      lib::L2CValue::_L2CValue((L2CValue *)auStack208);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    FUN_7100012870(this);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KIND_KIRBY);
    uVar8 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x35e8780a06);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      pLVar6 = aLStack240;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x3b312a0a1d);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_60);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      pLVar6 = aLStack224;
    }
    lib::L2CValue::_L2CValue(pLVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_MAX_FLAG);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack208);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    if ((bVar2 & 1U) != 0) {
      FUN_71000162f0(this);
    }
    this_01 = &local_70;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_01);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_MAX_FLAG);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar15);
    lib::L2CValue::L2CValue(aLStack256,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack272,0xcd16a7bf2);
    uVar8 = lib::L2CValue::as_integer(aLStack256);
    uVar13 = lib::L2CValue::as_integer(aLStack272);
    fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar8,uVar13);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,fVar15);
    uVar8 = lib::L2CValue::operator__((L2CValue *)auStack208,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)auStack208);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar8 & 1) == 0) {
      HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xd483c0ed2);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe396c1260);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe06860a20);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x13427c2ab6);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1473b9f705);
              uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0x144c53ef45);
                uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
                if ((uVar8 & 1) == 0) goto LAB_7100015ecc;
              }
            }
          }
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x14364f7dba);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,true);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack208);
      iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                        (*ppBVar14,HVar12,(bool)(bVar1 & 1),false,false);
      lib::L2CValue::L2CValue(aLStack368,iVar3);
      pLVar6 = aLStack368;
    }
    else {
      HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar14);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar12);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xd483c0ed2);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe396c1260);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe06860a20);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x13427c2ab6);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1473b9f705);
              uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              if ((uVar8 & 1) == 0) {
                lib::L2CValue::L2CValue((L2CValue *)&local_60,0x144c53ef45);
                uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
                lib::L2CValue::_L2CValue((L2CValue *)&local_60);
                if ((uVar8 & 1) == 0) goto LAB_7100015ecc;
              }
            }
          }
        }
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1441484d2c);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,true);
      HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_60);
      bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack208);
      iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                        (*ppBVar14,HVar12,(bool)(bVar1 & 1),false,false);
      lib::L2CValue::L2CValue(aLStack352,iVar3);
      pLVar6 = aLStack352;
    }
  }
  else {
    HVar12 = app::lua_bind::MotionModule__motion_kind_impl(*ppBVar14);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,HVar12);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xd483c0ed2);
    uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,0xe396c1260);
      uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,0x12f9028b63);
        uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_60,0x13427c2ab6);
          uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
          lib::L2CValue::_L2CValue((L2CValue *)&local_60);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)&local_60,0x1473b9f705);
            uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
            lib::L2CValue::_L2CValue((L2CValue *)&local_60);
            if ((uVar8 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,0x18309507cd);
              uVar8 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
              lib::L2CValue::_L2CValue((L2CValue *)&local_60);
              if ((uVar8 & 1) == 0) goto LAB_7100015ecc;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0x14d1f750bd);
    lib::L2CValue::L2CValue((L2CValue *)auStack208,true);
    HVar12 = lib::L2CValue::as_hash((L2CValue *)&local_60);
    bVar1 = lib::L2CValue::as_bool((L2CValue *)auStack208);
    iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                      (*ppBVar14,HVar12,(bool)(bVar1 & 1),false,false);
    lib::L2CValue::L2CValue(aLStack336,iVar3);
    pLVar6 = aLStack336;
  }
  lib::L2CValue::_L2CValue(pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)auStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_7100015ecc:
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

