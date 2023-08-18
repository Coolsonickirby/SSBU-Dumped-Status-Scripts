
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::StoneStone_check_dmg(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  L2CValue *in_x1;
  float fVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack160,in_x1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_FLOAT_2ND_DAMAGE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar7);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0xb9ea8580a);
  lib::L2CValue::operator_(aLStack96,pLVar4);
  lib::L2CValue::operator_(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_WORK_ID_FLOAT_2ND_DAMAGE);
  fVar7 = (float)lib::L2CValue::as_number(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack128,0x195328e321);
  uVar5 = lib::L2CValue::as_integer(aLStack80);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar5,uVar6);
  lib::L2CValue::L2CValue(aLStack112,fVar7);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar5 = lib::L2CValue::operator__(aLStack112,aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_INSTANT_DEATH_RESERVED);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,false);
    }
  }
  else {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0xb9ea8580a);
    lib::L2CValue::L2CValue(aLStack80,2);
    lib::L2CValue::operator_(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::DamageModule__add_damage_impl(this->moduleAccessor,fVar7,0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KIRBY_STATUS_KIND_STONE_END);
    lib::L2CValue::L2CValue(aLStack144,false);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack144);
    bVar1 = app::lua_bind::StatusModule__change_status_request_impl
                      (this->moduleAccessor,iVar3,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)return_value,false);
  }
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

