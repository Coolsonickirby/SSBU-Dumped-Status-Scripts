
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialLwShoot_end(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,1.0);
  lib::L2CValue::L2CValue(aLStack80,true);
  fVar3 = (float)lib::L2CValue::as_number(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AttackModule__set_attack_scale_impl(this->moduleAccessor,fVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_OIL);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

