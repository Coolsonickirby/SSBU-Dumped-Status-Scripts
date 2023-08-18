
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHi2Rush_end(L2CFighterJack *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_STATUS_KIND_SPECIAL_HI2_END);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_GENERATE_ARTICLE_WING);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    pLVar4 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack112,0xd07d69a9b);
    uVar5 = lib::L2CValue::as_integer(aLStack80);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar5,uVar6);
    lib::L2CValue::L2CValue(aLStack96,iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    fVar7 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar7,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar4 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI2_FLAG_DOYLE_NORMAL);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_JACK_GENERATE_ARTICLE_DOYLE);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_JACK_DOYLE_STATUS_KIND_SPECIAL_HI_END);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

