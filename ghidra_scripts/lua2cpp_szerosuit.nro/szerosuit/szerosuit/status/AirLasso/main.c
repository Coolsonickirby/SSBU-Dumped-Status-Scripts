
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSzerosuit::status::AirLasso_main(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack96,_ARTICLE_ID_NONE);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_CLIFF_HANG_DATA_AIR_LASSO);
  lib::L2CValue::L2CValue(aLStack128,true);
  lua2cpp::L2CFighterCommon::status_AirLasso
            (this,(L2CValue)0xb0,(L2CValue)0xa0,(L2CValue)0x90,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_GENERATE_ARTICLE_WHIP2);
  lib::L2CValue::L2CValue(aLStack160,_WEAPON_SZEROSUIT_WHIP2_MOTION_PART_SET_KIND_MATERIAL);
  lib::L2CValue::L2CValue(aLStack176,0x9e7d3cd80);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  HVar3 = lib::L2CValue::as_hash(aLStack176);
  app::lua_bind::ArticleModule__add_motion_partial_impl
            (this->moduleAccessor,iVar1,iVar2,HVar3,0.0,1.0,false,false,0.0,true,true,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

