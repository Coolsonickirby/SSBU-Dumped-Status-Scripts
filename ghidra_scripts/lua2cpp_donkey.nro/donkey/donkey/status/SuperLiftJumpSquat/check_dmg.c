
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::SuperLiftPass_check_dmg(L2CFighterDonkey *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *in_x1;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack144,in_x1);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xdc56470f9);
  fVar6 = (float)lib::L2CValue::as_number(pLVar3);
  fVar6 = (float)app::DamageTransactorImpl::calc_reaction_frame(fVar6);
  lib::L2CValue::L2CValue(aLStack80,fVar6);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
  lib::L2CValue::L2CValue(aLStack128,0xd14025cb6);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack64,fVar6);
  uVar4 = lib::L2CValue::operator_(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
    lib::L2CValue::L2CValue(aLStack128,0xd8d0b0d0c);
    uVar4 = lib::L2CValue::as_integer(aLStack112);
    uVar5 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack64,fVar6);
    uVar4 = lib::L2CValue::operator_(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack112,0xd8ddb421d);
      lib::L2CValue::L2CValue(aLStack128,0xdfa0c3d9a);
      uVar4 = lib::L2CValue::as_integer(aLStack112);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      uVar4 = lib::L2CValue::operator_(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_FLY);
        lib::L2CValue::operator_(aLStack96,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_3);
        lib::L2CValue::operator_(aLStack96,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_2);
      lib::L2CValue::operator_(aLStack96,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_1);
    lib::L2CValue::operator_(aLStack96,aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,false);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xc238ce5fd);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,0x5330809b6);
  lib::L2CValue::L2CValue(aLStack64,0x149cdc52bb);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack144,0xc238ce5fd);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar3,0x5330809b6);
    lib::L2CValue::L2CValue(aLStack64,0x1710166637);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_7100003fd8;
  }
  else {
LAB_7100003fd8:
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator_(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_DAMAGE_LEVEL_FLY);
  uVar4 = lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
      goto LAB_71000040b4;
    }
  }
  bVar1 = app::lua_bind::ItemModule__is_have_item_impl(this->moduleAccessor,0);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((bVar2 & 1U) != 0) {
    app::lua_bind::ItemModule__drop_item_impl(this->moduleAccessor,90.0,0.0,0);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,false);
LAB_71000040b4:
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

