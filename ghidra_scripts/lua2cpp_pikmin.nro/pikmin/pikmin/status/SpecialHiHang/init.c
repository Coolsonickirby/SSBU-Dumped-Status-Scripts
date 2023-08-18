
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPikminPikmin::status::SpecialHiHang_init
          (L2CWeaponPikminPikmin *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  L2CValue *this_01;
  L2CValue *this_02;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_WEAPON_PIKMIN_PIKMIN_STATUS_SPECIAL_HI_HANG_WORK_INT_INDEX);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
    uVar2 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar2 & 1) == 0) goto LAB_71000281e8;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,-30.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,30.0);
    lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_71000281e8:
  lib::L2CValue::L2CValue(aLStack144,0.0);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,aLStack112);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
  this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
  lib::L2CValue::L2CValue(aLStack192,1);
  uVar3 = lib::L2CValue::as_number(this_00);
  uVar4 = lib::L2CValue::as_number(this_01);
  uVar5 = lib::L2CValue::as_number(this_02);
  local_50 = CONCAT44(uVar4,uVar3);
  uStack72 = (ulong)uVar5;
  iVar1 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,iVar1);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

