
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterWiifit::status::SpecialHiEnd_main_loop(L2CFighterWiifit *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  Hash40 HVar7;
  float fVar8;
  uint uVar9;
  long lVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  Hash40MapEntry **local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack160,0);
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000148ac;
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_STATUS_KIND_FALL_SPECIAL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000148ac;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_SPEED_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0x1086bc4a93);
  lib::L2CValue::L2CValue(aLStack128,0x1d57d7b043);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack96,fVar8);
  lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
  app::sv_kinetic_energy::set_speed(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_SPEED_Y);
  fVar8 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_ROTATION);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar8);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xe);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,2.0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_50,pLVar6);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) != 0) {
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator_(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
          lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
          goto LAB_7100014784;
        }
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
        lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        lib::L2CValue::operator_(aLStack96,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
        uVar4 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
        lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
          lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
LAB_7100014784:
          lib::L2CValue::_L2CValue((L2CValue *)&local_50);
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack112,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  lVar10 = lib::L2CValue::as_number(aLStack128);
  uVar9 = lib::L2CValue::as_number(aLStack144);
  local_50 = (Hash40MapEntry **)(uVar4 & 0xffffffff | lVar10 << 0x20);
  uStack72 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar7,(Vector3f *)&local_50,0,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_WIIFIT_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_JUMP_ROTATION);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000148ac:
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

