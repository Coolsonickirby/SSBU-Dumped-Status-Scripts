
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootEnd_end(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::ItemModule__set_change_status_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue
            (aLStack80,_FIGHTER_BUDDY_INSTANCE_WORK_ID_INT_SPECIAL_N_BAKYUN_BULLET_SHOOT_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

