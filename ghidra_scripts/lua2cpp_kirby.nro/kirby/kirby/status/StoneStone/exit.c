
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::StoneStone_exit(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *this_00;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar4 = lib::L2CValue::as_number(aLStack96);
  lVar5 = lib::L2CValue::as_number(aLStack112);
  uVar3 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar4 & 0xffffffff | lVar5 << 0x20;
  uStack72 = (ulong)uVar3;
  app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KIRBY_STATUS_KIND_STONE_END);
  uVar4 = lib::L2CValue::operator__(this_00,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::DamageModule__set_damage_lock_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

