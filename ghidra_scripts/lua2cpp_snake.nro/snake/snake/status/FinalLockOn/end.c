
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterSnake::status::FinalLockOn_end(L2CFighterSnake *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_GENERATE_ARTICLE_LOCK_ON_CURSOR_READY);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0x1054fc4a8c);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x1054fc4a8c);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar3,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack112,0x105d4a06a7);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,0x105d4a06a7);
    HVar3 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar3,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SNAKE_STATUS_KIND_FINAL_CAMERA_ZOOM);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    FUN_7100015500(this);
    FUN_7100015660(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

