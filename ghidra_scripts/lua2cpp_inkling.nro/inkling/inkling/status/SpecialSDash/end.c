
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSDash_end(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  L2CValue *this_00;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_KIND_SPECIAL_S_RUN);
  uVar3 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,true);
    FUN_7100009e90(this,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INKLING_ROLLER_STATUS_KIND_END);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack96,0x23d3ec2d50);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x169d8e2182);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0x1603eab421);
    HVar4 = lib::L2CValue::as_hash(aLStack80);
    app::lua_bind::SoundModule__stop_se_impl(this->moduleAccessor,HVar4,0);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

