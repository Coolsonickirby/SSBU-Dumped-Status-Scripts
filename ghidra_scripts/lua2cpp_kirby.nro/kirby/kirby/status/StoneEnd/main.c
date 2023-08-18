
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::status::StoneEnd_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71001a6740();
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_FORCE_LOUPE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xb49d0bfb1);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xfbe42ba86);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar3 = lib::L2CValue::as_integer(aLStack64);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  FUN_7100229610(this);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_GENERATE_ARTICLE_STONE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,true);
  bVar1 = lib::L2CValue::as_bool(aLStack64);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KINETIC_TYPE_MOTION_FALL);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,StoneEnd_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

