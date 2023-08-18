
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialHiJump_exec(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  undefined auStack160 [32];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_JUMP);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_JUMP_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_REVERT_ANGLE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_REVERT_ANGLE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_INT_REVERT_ANGLE_COUNT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_FLOAT_INIT_DEGREE_X);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,5.0);
    lib::L2CValue::operator_(aLStack96,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,aLStack112);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,(L2CValue *)(auStack160 + 0x10));
    pLVar5 = aLStack176;
    lua2cpp::L2CFighterBase::lerp(this,SUB81(pLVar5,0),(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CAgent::math_abs((L2CAgent *)auStack160,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    uVar4 = lib::L2CValue::operator_(aLStack224,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_FLAG_REVERT_ANGLE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack240,fVar6);
    lib::L2CValue::operator_((L2CValue *)auStack160,aLStack240);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    lib::L2CValue::L2CValue(aLStack272,0.0);
    uVar4 = lib::L2CValue::as_number(aLStack224);
    lVar8 = lib::L2CValue::as_number(aLStack256);
    uVar7 = lib::L2CValue::as_number(aLStack272);
    local_50 = uVar4 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar7;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::operator_((L2CValue *)auStack160,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_BRAVE_STATUS_SPECIAL_HI_WORK_FLOAT_DEGREE_X);
    fVar6 = (float)lib::L2CValue::as_number(aLStack224);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack160 + 0x10));
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

