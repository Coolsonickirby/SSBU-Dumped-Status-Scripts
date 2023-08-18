
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::SpecialLwAttackTurn_init(L2CFighterKen *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  DamageNoReactionMode DVar3;
  HitStopMulTarget HVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  float fVar8;
  float fVar9;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SAVING_LV);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_SAVING_LV_3);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue
              (aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SUPER_ARMOUR_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    this_00 = aLStack80;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack128,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_INT_SUPER_ARMOUR_COUNT);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar6 = lib::L2CValue::operator_(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar6 & 1) == 0) goto LAB_710000d82c;
    lib::L2CValue::L2CValue(aLStack112,_DAMAGE_NO_REACTION_MODE_DAMAGE_POWER);
    lib::L2CValue::L2CValue(aLStack128,-1.0);
    lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack192,0xd26dd198e);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    DVar3 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    fVar9 = (float)lib::L2CValue::as_number(aLStack144);
    app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
              (this->moduleAccessor,DVar3,fVar8,fVar9,-1);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack80,true);
    bVar1 = lib::L2CValue::as_bool(aLStack80);
    app::lua_bind::DamageModule__set_no_reaction_no_effect_impl
              (this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0xbc9f69a3e);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    app::lua_bind::HitModule__set_defense_mul_status_impl(this->moduleAccessor,fVar8);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0xe10742702);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar8);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::operator_(aLStack128,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_STATUS_WORK_ID_FLOAT_RESERVE_KINETIC_ENERGY_TYPE_ATTACK_SPEED_MUL)
    ;
    fVar8 = (float)lib::L2CValue::as_number(aLStack112);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x129874745c);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::L2CValue(aLStack144,_HIT_STOP_MUL_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack176,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack192,0xd26dd198e);
    uVar6 = lib::L2CValue::as_integer(aLStack176);
    uVar7 = lib::L2CValue::as_integer(aLStack192);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack160,fVar8);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    HVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)lib::L2CValue::as_number(aLStack160);
    app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar8,HVar4,fVar9);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLOAT_ENDURANCE);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::operator_(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    fVar8 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::DamageModule__set_no_reaction_damage_power_impl(this->moduleAccessor,fVar8);
    lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack128,0x129874745c);
    uVar6 = lib::L2CValue::as_integer(aLStack112);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7)
    ;
    lib::L2CValue::L2CValue(aLStack80,fVar8);
    lib::L2CValue::L2CValue(aLStack144,_HIT_STOP_MUL_TARGET_ALL);
    fVar8 = (float)lib::L2CValue::as_number(aLStack80);
    HVar4 = lib::L2CValue::as_integer(aLStack144);
    fVar9 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::HitModule__set_hit_stop_mul_impl(this->moduleAccessor,fVar8,HVar4,fVar9);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = aLStack112;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_710000d82c:
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_RYU_STATUS_WORK_ID_SPECIAL_LW_FLAG_STOP_MATERIAL_ANIM);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

