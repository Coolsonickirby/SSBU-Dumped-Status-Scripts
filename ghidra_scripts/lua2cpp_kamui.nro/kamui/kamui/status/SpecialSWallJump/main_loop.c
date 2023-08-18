
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKamui::status::SpecialSWallJump_main_loop(L2CFighterKamui *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  BattleObjectModuleAccessor *pBVar8;
  float fVar9;
  uint uVar10;
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
  undefined8 local_70;
  undefined8 uStack104;
  ulong uStack96;
  undefined8 uStack88;
  
  lib::L2CValue::L2CValue(aLStack208,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100018d94;
  }
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,false);
    uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,false);
      uVar5 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar5 & 1) != 0) goto LAB_71000182b4;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100018d94;
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
LAB_71000182b4:
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar2 & 1));
  lib::L2CValue::operator_(aLStack208,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  lib::L2CValue::L2CValue((L2CValue *)&uStack96,false);
  uVar5 = lib::L2CValue::operator__(aLStack208,(L2CValue *)&uStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
  if ((uVar5 & 1) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,(L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_KIND_LANDING);
      lib::L2CValue::L2CValue(aLStack256,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100018d94;
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack288,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_7100018d94;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_MOVE_KINETIC_PARAM);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,ENERGY_STOP_RESET_TYPE_AIR);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x125641f415);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      fVar9 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,fVar9);
      lib::L2CValue::operator_(aLStack128,aLStack176);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,_ENERGY_GRAVITY_RESET_TYPE_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x122146c483);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,fVar9);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack160,0x12d5169d49);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::operator_(aLStack128);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_MOTION);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::KineticModule__unable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,_FIGHTER_KINETIC_ENERGY_ID_ENV_WIND);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_MOVE_KINETIC_PARAM);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_CHANGE_JUMP_ACCEL_Y);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&uStack96,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue(aLStack144,0xba18057d9);
      lib::L2CValue::L2CValue(aLStack160,0);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar9);
      lib::L2CValue::operator_(aLStack128);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&uStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_70);
      app::sv_kinetic_energy::set_accel(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_CHANGE_JUMP_ACCEL_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    }
    lib::L2CValue::L2CValue((L2CValue *)&local_70,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_JUMP_CONTROL)
    ;
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&uStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack144,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      pBVar8 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      uVar5 = lib::L2CValue::as_number(aLStack160);
      uVar10 = lib::L2CValue::as_number(aLStack176);
      uStack96 = uVar5 & 0xffffffff | (ulong)uVar10 << 0x20;
      uStack104 = _LUA_SCRIPT_LINE_MAP_CORRECTION;
      local_70 = LUA_SCRIPT_LINE_STATUS_SHIFT;
      uStack88 = 0;
      app::KineticUtility::reset_enable_energy
                (iVar3,pBVar8,iVar4,(Vector2f *)&uStack96,(Vector3f *)&local_70);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue
                ((L2CValue *)&uStack96,_FIGHTER_KAMUI_STATUS_SPECIAL_S_FLAG_JUMP_CONTROL);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&uStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&uStack96);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100018d94:
  lib::L2CValue::_L2CValue(aLStack208);
  return;
}

