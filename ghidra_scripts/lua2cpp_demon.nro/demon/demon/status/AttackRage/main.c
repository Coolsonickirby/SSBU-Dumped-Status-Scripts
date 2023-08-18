
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackRage_main(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  long lVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Fighter *pFVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0x11a0d5574d);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH);
  lVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar3,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_DISABLE_EFFECT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2S);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_71000178f4;
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,10);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STEP_2F);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_71000178f4;
  }
  else {
LAB_71000178f4:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_STEP_FLAG_CANCEL);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_15);
      lib::L2CValue::L2CValue(aLStack96,true);
      pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = lib::L2CValue::as_bool(aLStack96);
      app::FighterSpecializer_Demon::add_attack_log(pFVar6,iVar2,(bool)(bVar1 & 1));
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar4 = aLStack80;
      goto LAB_7100017a58;
    }
  }
  lib::L2CValue::L2CValue(aLStack96,0x2b94de0d96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LOG_ACTION_CATEGORY_ATTACK);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LOG_ATTACK_KIND_ADDITIONS_ATTACK_15);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  pLVar4 = aLStack96;
LAB_7100017a58:
  lib::L2CValue::_L2CValue(pLVar4);
  lib::L2CValue::L2CValue(aLStack112,0x114355a698);
  lib::L2CValue::L2CValue(aLStack128,0x156e73fb55);
  lib::L2CValue::L2CValue(aLStack144,false);
  FUN_7100028fe0(aLStack96,this,aLStack112,aLStack128,aLStack144);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack160,AttackRage_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x60);
  lib::L2CValue::_L2CValue(aLStack160);
  return;
}

