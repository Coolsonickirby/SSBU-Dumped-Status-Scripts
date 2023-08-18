
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponNessYoyohead::status::Takeup_exec(L2CWeaponNessYoyohead *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  float in_register_00005008;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_INT_TAKEUP_INTP_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,0);
  uVar3 = lib::L2CValue::operator_(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar3 & 1) != 0) {
    uVar7 = app::lua_bind::LinkModule__get_constraint_translate_offset_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,(float)uVar7);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar7 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
    FUN_7100022a10(aLStack112,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1.0);
    lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,aLStack176);
    lib::L2CValue::operator_(pLVar4,aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar5,aLStack176);
    lib::L2CValue::operator_(pLVar4,aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    lib::L2CValue::operator_(pLVar5,aLStack176);
    lib::L2CValue::operator_(pLVar4,aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    lib::L2CValue::operator_(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    uVar3 = lib::L2CValue::as_number(pLVar4);
    lVar8 = lib::L2CValue::as_number(pLVar5);
    uVar6 = lib::L2CValue::as_number(this_00);
    local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
    uStack72 = (ulong)uVar6;
    app::lua_bind::LinkModule__set_constraint_translate_offset_impl
              (this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_NESS_YOYO_HEAD_STATUS_WORK_INT_TAKEUP_INTP_FRAME);
    iVar1 = lib::L2CValue::as_integer(aLStack192);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  FUN_710002acf0(this,&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

