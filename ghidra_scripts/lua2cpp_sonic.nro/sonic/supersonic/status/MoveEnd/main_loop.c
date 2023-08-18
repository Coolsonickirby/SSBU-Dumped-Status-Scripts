
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSonicSupersonic::status::MoveEnd_main_loop
          (L2CWeaponSonicSupersonic *this,L2CValue *return_value)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_SONIC_SUPERSONIC_KINETIC_ENERGY_ID_GENERAL);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
  fVar6 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
  lib::L2CValue::L2CValue(aLStack96,fVar6);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_SONIC_SUPERSONIC_INSTANCE_WORK_ID_FLOAT_START_X);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar6);
  lib::L2CValue::_L2CValue(aLStack176);
  pfVar3 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,*pfVar3);
  lib::L2CValue::L2CValue(aLStack160,pfVar3[1]);
  lib::L2CValue::L2CValue(aLStack144,pfVar3[2]);
  FUN_7100028a00(aLStack128,this,aLStack176);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  uVar4 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
LAB_710002bbdc:
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
    uVar4 = lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) goto LAB_710002bc44;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack112);
    if ((uVar4 & 1) == 0) goto LAB_710002bc44;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    uVar4 = lib::L2CValue::operator__(aLStack112,pLVar5);
    if ((uVar4 & 1) == 0) goto LAB_710002bbdc;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator_(aLStack192,(L2CValue *)&local_50);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
LAB_710002bc44:
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack192);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    lib::L2CValue::operator_(pLVar5,aLStack112);
    pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack128,0x162d277af);
    uVar7 = lib::L2CValue::as_number(pLVar5);
    uVar8 = lib::L2CValue::as_number(this_00);
    uVar9 = lib::L2CValue::as_number(this_01);
    local_50 = CONCAT44(uVar8,uVar7);
    uStack72 = (ulong)uVar9;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_SONIC_SUPERSONIC_STATUS_KIND_PRE_END);
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

