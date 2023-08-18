
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::AirLassoReach_main(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_AIR_LASSO_WORK_INT_ARTICLE_ID);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack80,true);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_SZEROSUIT_WHIP2_STATUS_KIND_REACH);
  lua2cpp::L2CFighterCommon::status_AirLassoReach(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_SZEROSUIT_WHIP2_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack128,0xdf7ec6d94);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  HVar4 = lib::L2CValue::as_hash(aLStack128);
  app::lua_bind::ArticleModule__add_motion_partial_impl
            (this->moduleAccessor,iVar2,iVar3,HVar4,0.0,1.0,false,false,0.0,true,true,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

