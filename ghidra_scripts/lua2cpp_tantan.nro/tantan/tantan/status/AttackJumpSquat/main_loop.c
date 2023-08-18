
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackJumpSquat_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *this_00;
  Hash40 HVar7;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100044bd0(aLStack80,this,aLStack96,aLStack112);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar6 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) goto LAB_710005fb58;
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_TRANSITION_TERM_ID_JUMP_START);
  iVar5 = lib::L2CValue::as_integer(aLStack80);
  bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_TRANSITION_TERM_ID_FALL);
    iVar5 = lib::L2CValue::as_integer(aLStack80);
    bVar3 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar3 & 1));
    bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar4 & 1U) != 0) {
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(this_00,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status
                  (this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40));
        goto LAB_710005fa08;
      }
    }
    FUN_7100022710(aLStack80,this);
    HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,HVar7);
    lib::L2CValue::L2CValue(aLStack144,0x168179375a);
    lib::L2CValue::L2CValue(aLStack160,0x1c4345616d);
    FUN_710004ebd0(aLStack64,this,aLStack80,aLStack128,aLStack144,aLStack160);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lVar2 = -0x40;
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_JUMP);
    lib::L2CValue::L2CValue(aLStack80,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x30),(L2CValue)(cVar1 + -0x40))
    ;
LAB_710005fa08:
    lib::L2CValue::_L2CValue(aLStack80);
    lVar2 = -0x30;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710005fb58:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

