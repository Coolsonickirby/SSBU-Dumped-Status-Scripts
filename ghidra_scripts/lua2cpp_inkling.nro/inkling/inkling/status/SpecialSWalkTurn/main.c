
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSWalkTurn_main(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0x13925cce03);
  lib::L2CValue::L2CValue(aLStack80,0x1269c799f8);
  lib::L2CValue::L2CValue(aLStack96,false);
  FUN_710001cbc0(this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,0x9fb8851de);
  lib::L2CValue::L2CValue(aLStack128,0x9fb8851de);
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_710001cfc0(this,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INKLING_ROLLER_STATUS_KIND_WALK_TURN);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  FUN_710001f4f0(this);
  lib::L2CValue::L2CValue(aLStack160,SpecialSWalkTurn_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

