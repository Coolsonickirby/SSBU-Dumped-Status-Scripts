
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPichuCloud::status::Regular_map_correct(L2CWeaponPichuCloud *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  float fVar8;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined auStack128 [32];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_CLOUD_INSTANCE_WORK_ID_FLAG_ACTIVATE_KAMINARI);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::operator_(aLStack192,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    lib::L2CValue::operator_(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKACHU_CLOUD_INSTANCE_WORK_ID_INT_INTERVAL_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_CLOUD_INSTANCE_WORK_ID_INT_INTERVAL_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::operator_(aLStack192,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue((L2CValue *)(auStack128 + 0x10),0);
    lib::L2CValue::L2CValue((L2CValue *)auStack128,0);
    lib::L2CValue::L2CValue(aLStack208,0);
    lib::L2CValue::L2CValue(aLStack64,32.0);
    lib::L2CValue::operator_((L2CValue *)(auStack128 + 0x10),aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack144,0xb8a53b1e9);
    lib::L2CValue::L2CValue(aLStack160,0x67d07d23f);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar8);
    lib::L2CValue::operator_(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::operator_((L2CValue *)(auStack128 + 0x10),aLStack96);
    pLVar7 = aLStack64;
    lib::L2CValue::operator_((L2CValue *)auStack128,pLVar7);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CAgent::math_abs((L2CAgent *)auStack128,pLVar7);
    lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::operator_(aLStack208,aLStack80);
    lib::L2CValue::_L2CValue((L2CValue *)auStack128);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack128 + 0x10));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    uVar5 = lib::L2CValue::operator__(aLStack208,aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_CLOUD_INSTANCE_WORK_ID_INT_KAMINARI_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,iVar3);
      lib::L2CValue::operator_(aLStack176,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack64,1);
      uVar5 = lib::L2CValue::operator__(aLStack64,aLStack176);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_PIKACHU_CLOUD_GENERATE_ARTICLE_KAMINARI);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar3,false,-1);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack64,0);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_PIKACHU_CLOUD_INSTANCE_WORK_ID_INT_INTERVAL_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  return;
}

