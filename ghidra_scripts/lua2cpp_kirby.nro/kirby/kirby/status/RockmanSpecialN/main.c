
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RockmanSpecialN_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_ROCKMAN_GENERATE_ARTICLE_METALBLADE);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
    lib::L2CValue::L2CValue(aLStack96,0x273692b070);
    lib::L2CValue::L2CValue(aLStack112,0);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar5 = lib::L2CValue::as_hash(aLStack96);
    uVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar5,uVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_ROCKMAN_STATUS_SPECIAL_N_WORK_ID_FLAG_ALREADY_EXIST_METALBLADE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,RockmanSpecialN_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

