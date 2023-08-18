
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiSet_exec(L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  float fVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
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
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            (aLStack208,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_SET_WORK_FLOAT_POS_X_OFFSET);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_X);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,fVar7);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,_WEAPON_PIKMIN_PIKMIN_INSTANCE_WORK_ID_FLOAT_OWNER_Y);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,fVar7);
  lib::L2CValue::_L2CValue(aLStack208);
  pfVar4 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack208,*pfVar4);
  lib::L2CValue::L2CValue(aLStack192,pfVar4[1]);
  lib::L2CValue::L2CValue(aLStack176,pfVar4[2]);
  FUN_7100008920(aLStack160,this,aLStack208);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack208);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((bVar2 & 1U) == 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(aLStack272,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.4);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(pLVar5,aLStack240);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack272);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(aLStack144,pLVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.4);
    lib::L2CValue::operator_(aLStack256,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::operator_(pLVar5,aLStack240);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar5,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  else {
    lib::L2CValue::operator_(aLStack128,aLStack112);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar5,aLStack144);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
  uVar9 = lib::L2CValue::as_number(pLVar5);
  lVar10 = lib::L2CValue::as_number(pLVar6);
  uVar8 = lib::L2CValue::as_number(this_00);
  local_60 = uVar9 & 0xffffffff | lVar10 << 0x20;
  uStack88 = (ulong)uVar8;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

