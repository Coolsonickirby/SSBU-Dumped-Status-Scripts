
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDolly::status::SuperSpecial2_end(L2CFighterDolly *this,L2CValue *return_value)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_STATUS_KIND_SUPER_SPECIAL2_BLOW);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_DOLLY_GENERATE_ARTICLE_FIRE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar3,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x12c2be5a17);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::L2CValue(aLStack96,true);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0x11ca25be02);
    lib::L2CValue::L2CValue(aLStack80,true);
    lib::L2CValue::L2CValue(aLStack96,true);
    HVar5 = lib::L2CValue::as_hash(aLStack64);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::EffectModule__kill_kind_impl
              (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

