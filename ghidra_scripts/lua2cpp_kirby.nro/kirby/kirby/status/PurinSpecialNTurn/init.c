
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNTurn_init(L2CFighterKirby *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  void *pvVar8;
  ulong uVar9;
  KineticEnergyNormal *pKVar10;
  L2CValue *this_01;
  BattleObjectModuleAccessor *pBVar11;
  Hash40 HVar12;
  ulong *puVar13;
  BattleObjectModuleAccessor **ppBVar14;
  float fVar15;
  undefined8 uVar16;
  L2CValue aLStack272 [16];
  ulong local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  undefined auStack176 [32];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar14 = &this->moduleAccessor;
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack112,iVar3);
  fVar15 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar14);
  lib::L2CValue::L2CValue(aLStack128,fVar15);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar15);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_100,aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
    fVar15 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_START_LR);
    fVar15 = (float)lib::L2CValue::as_number(aLStack128);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,3);
  uVar4 = lib::L2CValue::as_integer(pLVar7);
  uVar4 = app::sv_battle_object::kind(uVar4);
  lib::L2CValue::L2CValue(aLStack144,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  pvVar8 = (void *)app::lua_bind::KineticModule__get_energy_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack176 + 0x10),pvVar8);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar15);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar15);
  lib::L2CValue::operator_((L2CValue *)&local_100,aLStack208);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack208,0xb7723336f);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  uVar9 = lib::L2CValue::as_integer(aLStack208);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,uVar6,uVar9);
  lib::L2CValue::L2CValue(aLStack192,fVar15);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_100,(L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::operator_((L2CValue *)auStack176,aLStack192);
    lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_100);
  }
  else {
    lib::L2CValue::operator_((L2CValue *)auStack176,aLStack192);
    lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_100);
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack224,0xd3782685c);
  pLVar7 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_100);
  uVar6 = lib::L2CValue::as_integer(aLStack224);
  fVar15 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar14,(ulong)pLVar7,uVar6);
  lib::L2CValue::L2CValue(aLStack208,fVar15);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,pLVar7);
  uVar6 = lib::L2CValue::operator_((L2CValue *)&local_100,aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0.0);
    uVar6 = lib::L2CValue::operator_((L2CValue *)auStack176,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,1.0);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::operator_((L2CValue *)auStack176,aLStack224);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_100,-1.0);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::operator_((L2CValue *)auStack176,aLStack224);
    }
    lib::L2CValue::_L2CValue(aLStack224);
  }
  lib::L2CValue::L2CValue(aLStack224,0.0);
  uVar6 = lib::L2CValue::as_number((L2CValue *)auStack176);
  uVar4 = lib::L2CValue::as_number(aLStack224);
  local_100 = uVar6 & 0xffffffff | (ulong)uVar4 << 0x20;
  uStack248 = 0;
  pKVar10 = (KineticEnergyNormal *)lib::L2CValue::as_pointer((L2CValue *)(auStack176 + 0x10));
  puVar13 = &local_100;
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar10,(Vector2f *)puVar13);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CAgent::math_abs((L2CAgent *)auStack176,(L2CValue *)puVar13);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED);
  fVar15 = (float)lib::L2CValue::as_number((L2CValue *)&local_100);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::L2CValue((L2CValue *)auStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x50,(L2CValue)0x40);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue((L2CValue *)auStack176);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),0x18cdc1683);
  this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack208,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  uVar16 = app::lua_bind::KineticModule__get_sum_speed_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar16);
  lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar16 >> 0x20));
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_100);
  lib::L2CValue::operator_(this_01,aLStack240);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack208);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),0x18cdc1683);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_100,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_SPEED_BACKUP);
  fVar15 = (float)lib::L2CValue::as_number(pLVar7);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(auStack176 + 0x10),0x18cdc1683);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,-0.05);
  lib::L2CValue::operator_(pLVar7,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_ACCEL);
  fVar15 = (float)lib::L2CValue::as_number(aLStack208);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar6 & 1) == 0) {
    FUN_71001ba4f0(this);
  }
  else {
    FUN_71001b9f40(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_FRAME);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  iVar5 = lib::L2CValue::as_integer(aLStack208);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
  app::KineticUtility::clear_unable_energy(iVar3,pBVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::L2CValue(aLStack208,_FIGHTER_PURIN_STATUS_SPECIAL_N_FLAG_MAX_FLAG);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack208);
  if ((bVar2 & 1U) != 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
    pBVar11 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar7);
    app::FighterSpecializer_Kirby::purin_remove_effect_flushing(pBVar11);
  }
  lib::L2CValue::L2CValue(aLStack208,0x14a82be819);
  lib::L2CValue::L2CValue(aLStack224,true);
  HVar12 = lib::L2CValue::as_hash(aLStack208);
  bVar1 = lib::L2CValue::as_bool(aLStack224);
  iVar3 = app::lua_bind::SoundModule__play_status_se_impl
                    (*ppBVar14,HVar12,(bool)(bVar1 & 1),false,false);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_EFFECT_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack208);
  iVar5 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::WorkModule__set_int_impl(*ppBVar14,iVar3,iVar5);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack224,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_MOVE_DIR);
  iVar3 = lib::L2CValue::as_integer(aLStack224);
  fVar15 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar14,iVar3);
  lib::L2CValue::L2CValue(aLStack208,fVar15);
  lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_TURN_ROLL_DIR);
  fVar15 = (float)lib::L2CValue::as_number(aLStack208);
  iVar3 = lib::L2CValue::as_integer(aLStack272);
  app::lua_bind::WorkModule__set_float_impl(*ppBVar14,fVar15,iVar3);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack176 + 0x10));
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

