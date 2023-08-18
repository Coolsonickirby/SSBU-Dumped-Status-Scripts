
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSDash_main(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *this_00;
  Hash40 HVar5;
  float fVar6;
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::ItemModule__set_have_item_visibility_impl(this->moduleAccessor,(bool)(bVar1 & 1),0)
  ;
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_710001cb10(this);
  lib::L2CValue::L2CValue(aLStack80,1.0);
  fVar6 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0xe3d6acb62);
  lib::L2CValue::L2CValue(aLStack112,0x127f383ead);
  lib::L2CValue::L2CValue(aLStack128,false);
  FUN_710001cbc0(this,aLStack96,aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  FUN_7100006390(aLStack144,this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x49b6edd00);
    lib::L2CValue::L2CValue(aLStack160,0x821ce80b6);
    lib::L2CValue::L2CValue(aLStack176,false);
    FUN_710001cfc0(this,aLStack144,aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,0xb76f8794c);
    lib::L2CValue::L2CValue(aLStack160,0xb76f8794c);
    lib::L2CValue::L2CValue(aLStack176,false);
    FUN_710001cfc0(this,aLStack144,aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_INKLING_ROLLER_STATUS_KIND_DASH);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_KINETIC_TYPE_AIR_STOP);
  lib::L2CValue::L2CValue(aLStack224,true);
  FUN_7100026fb0(this,aLStack192,aLStack208,aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack240,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack240);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack256,false);
    FUN_7100027a30(aLStack240,this,aLStack256);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack256);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100027af0);
  lib::L2CValue::operator_(this_00,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack288,0x169d8e2182);
  HVar5 = lib::L2CValue::as_hash(aLStack288);
  bVar1 = app::lua_bind::SoundModule__is_playing_impl(this->moduleAccessor,HVar5);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator__(aLStack272,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack288);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack272,0x169d8e2182);
    HVar5 = lib::L2CValue::as_hash(aLStack272);
    iVar2 = app::lua_bind::SoundModule__play_se_impl
                      (this->moduleAccessor,HVar5,true,false,false,false,0);
    lib::L2CValue::L2CValue(aLStack80,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack272);
  }
  lib::L2CValue::L2CValue(aLStack272,SpecialSDash_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xf0);
  lib::L2CValue::_L2CValue(aLStack272);
  return;
}

