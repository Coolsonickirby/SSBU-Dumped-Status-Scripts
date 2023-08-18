
void __thiscall
L2CWeaponTantanRing::status::Fly_init(L2CWeaponTantanRing *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  L2CValue *pLVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
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
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
  uVar3 = lib::L2CValue::as_integer(pLVar4);
  uVar3 = app::sv_battle_object::get_founder_id(uVar3);
  lib::L2CValue::L2CValue(aLStack80,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::BattleObjectManager__is_active_find_battle_object_impl
                    (FIGHTER_INSTANCE_WORK_ID_INT_SCALING_STATUS,uVar3);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    pfVar5 = (float *)app::sv_battle_object::pos(uVar3);
    lib::L2CValue::L2CValue(aLStack144,*pfVar5);
    lib::L2CValue::L2CValue(aLStack128,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack112,pfVar5[2]);
    FUN_710000eb70(aLStack96,this,aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack160,pLVar4);
    pfVar5 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack224,*pfVar5);
    lib::L2CValue::L2CValue(aLStack208,pfVar5[1]);
    lib::L2CValue::L2CValue(aLStack192,pfVar5[2]);
    FUN_710000eb70(aLStack176,this,aLStack224);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack176,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack240,pLVar4);
    uVar6 = lib::L2CValue::operator_(aLStack160,aLStack240);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack256,-1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
    else {
      lib::L2CValue::L2CValue(aLStack256,1.0);
      fVar7 = (float)lib::L2CValue::as_number(aLStack256);
      app::lua_bind::PostureModule__set_lr_impl(this->moduleAccessor,fVar7);
    }
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

