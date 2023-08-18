
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::AttackRage_end(L2CFighterDemon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  DamageNoReactionMode DVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  Hash40 HVar6;
  Fighter *pFVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100028ee0();
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_RAGE_CATCH);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_INSTANCE_WORK_ID_FLAG_ATTACK_RAGE_CAPTURE);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_STATUS_ATTACK_RAGE_DRIVE_DISABLE_EFFECT);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_DEMON_INSTANCE_WORK_ID_INT_RAGE_SYSTEM_FRAME);
      iVar2 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack96,iVar2);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator_(aLStack80,aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_ANIMCMD_EFFECT);
        lib::L2CValue::L2CValue(aLStack96,0x15115d148e);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        HVar6 = lib::L2CValue::as_hash(aLStack96);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar2,HVar6,-1);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
      }
    }
    lib::L2CValue::L2CValue(aLStack80,_DAMAGE_NO_REACTION_MODE_NORMAL);
    DVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
              (this->moduleAccessor,DVar3,-1.0,-1.0,-1);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
    lib::L2CValue::L2CValue(aLStack80,true);
    pFVar7 = (Fighter *)lib::L2CValue::as_pointer(pLVar4);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::FighterSpecializer_Demon::sub_rage_system(pFVar7,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

