
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::SpecialNSpit_main(L2CFighterKrool *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  L2CValue *this_00;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KROOL_BLUNDERBUSS_STATUS_KIND_SPIT);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar4 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_F);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_HI);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_INSTANCE_WORK_ID_INT_SPECIAL_N_SPIT_TYPE);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,iVar3);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_SPECIAL_N_SPIT_TYPE_B);
        uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) goto LAB_710000cc50;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
        lib::L2CValue::L2CValue(aLStack80,0x64eef07e9);
        lib::L2CValue::L2CValue(aLStack96,false);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
        lib::L2CValue::L2CValue(aLStack80,0x7c51b6b20);
        lib::L2CValue::L2CValue(aLStack96,false);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        HVar6 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        app::lua_bind::ArticleModule__change_motion_impl
                  (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_GENERATE_ARTICLE_BLUNDERBUSS);
      lib::L2CValue::L2CValue(aLStack80,0x64982c3f0);
      lib::L2CValue::L2CValue(aLStack96,false);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      HVar6 = lib::L2CValue::as_hash(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::lua_bind::ArticleModule__change_motion_impl
                (this->moduleAccessor,iVar3,HVar6,(bool)(bVar1 & 1),-1.0);
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
LAB_710000cc50:
  FUN_7100025c00(this);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,false);
    FUN_7100026590(aLStack80,this,aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100026960);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,SpecialNSpit_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

