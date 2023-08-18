
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialHiFall_main(L2CFighterKrool *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BACKPACK);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_BACKPACK_STATUS_KIND_FALL);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar2,iVar3);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0xfb29587f1);
  lib::L2CValue::L2CValue(aLStack96,0xfb29587f1);
  lib::L2CValue::L2CValue(aLStack112,true);
  FUN_710001dba0(this,aLStack80,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack128,0xfb29587f1);
  lib::L2CValue::L2CValue(aLStack144,0x11a650e3e3);
  lib::L2CValue::L2CValue(aLStack160,0x11a13d27fa);
  FUN_710001e090(this,aLStack144,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_710001ea30(this);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack176,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_71000210d0(aLStack176,this,aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100022f30);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_CLIFF_HANG_DATA_SPECIAL_HI);
  uVar4 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar4);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialHiFall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

