
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::SpecialSEnd_exec(L2CFighterMetaknight *this,L2CValue *return_value)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined8 local_b0;
  ulong uStack168;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_b0,_FIGHTER_METAKNIGHT_STATUS_SPECIAL_S_END_WORK_INT_ROT_COMP_FRAME)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_b0);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  lib::L2CValue::L2CValue((L2CValue *)&local_b0,0);
  uVar3 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_b0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
  if ((uVar3 & 1) == 0) {
    pfVar4 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
    lib::L2CValue::L2CValue((L2CValue *)&local_b0,*pfVar4);
    lib::L2CValue::L2CValue(aLStack160,pfVar4[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar4[2]);
    FUN_7100004060(aLStack112,this,&local_b0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)&local_b0);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack128,pLVar5);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,2);
    lib::L2CValue::operator_((L2CValue *)&local_50,aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::operator_(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::operator_(aLStack128,aLStack192);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    uVar6 = lib::L2CValue::as_number(aLStack208);
    uVar7 = lib::L2CValue::as_number(pLVar5);
    uVar8 = lib::L2CValue::as_number(this_00);
    local_50 = CONCAT44(uVar7,uVar6);
    uStack72 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar1 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    lib::L2CValue::L2CValue(aLStack112,0.0);
    lib::L2CValue::L2CValue(aLStack128,0.0);
    uVar6 = lib::L2CValue::as_number((L2CValue *)&local_50);
    uVar7 = lib::L2CValue::as_number(aLStack112);
    uVar8 = lib::L2CValue::as_number(aLStack128);
    local_b0 = CONCAT44(uVar7,uVar6);
    uStack168 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_b0,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lVar1 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

