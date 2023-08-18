
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackLadder_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  L2CValue *pLVar8;
  L2CAgent *this_01;
  ulong uVar9;
  Hash40 HVar10;
  float fVar11;
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
  
  FUN_71000442a0(aLStack96,this);
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_LADDER);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100044bd0(aLStack96,this,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      FUN_710004c020(this);
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::L2CValue(aLStack160,false);
      FUN_710004c370(aLStack96,this,aLStack144,aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_INSTANCE_WORK_ID_FLAG_METAMON_EXHAUST);
      iVar5 = lib::L2CValue::as_integer(aLStack192);
      bVar4 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar4 & 1));
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar7 = lib::L2CValue::operator__(aLStack176,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar7 & 1) == 0) {
        pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar7 = lib::L2CValue::operator__(pLVar8,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar7 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,GROUND_TOUCH_FLAG_RIGHT | _GROUND_TOUCH_FLAG_LEFT);
          uVar6 = lib::L2CValue::as_integer(aLStack176);
          bVar4 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar6);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar4 & 1));
          bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((bVar3 & 1U) == 0) {
            FUN_71000220f0(aLStack80,this);
            lib::L2CValue::L2CValue(aLStack176,aLStack80);
            lib::L2CValue::L2CValue(aLStack192,false);
            lib::L2CValue::L2CValue(aLStack208,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
            lua2cpp::L2CFighterCommon::FighterStatusUniqProcessGimmickLadder_fix_pos_ladder_param
                      (this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack192);
            lib::L2CValue::_L2CValue(aLStack176);
            FUN_7100022710(aLStack240,this);
            HVar10 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
            lib::L2CValue::L2CValue(aLStack256,HVar10);
            lib::L2CValue::L2CValue(aLStack272,0x10329e2c29);
            lib::L2CValue::L2CValue(aLStack288,0x163a330f81);
            FUN_710004ebd0(aLStack224,this,aLStack240,aLStack256,aLStack272,aLStack288);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack288);
            lib::L2CValue::_L2CValue(aLStack272);
            lib::L2CValue::_L2CValue(aLStack256);
            lib::L2CValue::_L2CValue(aLStack240);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lVar2 = -0x40;
            goto LAB_7100043fec;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
          lib::L2CValue::L2CValue(aLStack176,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x50);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_LANDING);
          lib::L2CValue::L2CValue(aLStack176,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x50);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_METAMON_OUT);
        lib::L2CValue::L2CValue(aLStack176,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)0x50);
      }
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    return;
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_NONE);
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S);
  lib::L2CValue::operator_(pLVar8,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) == 0) {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N);
    lib::L2CValue::operator_(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      goto LAB_7100043f0c;
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      goto LAB_7100043f0c;
    }
    pLVar8 = (L2CValue *)0x1a;
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(this_01,pLVar8);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0x1403efe8f2);
    uVar7 = lib::L2CValue::as_integer(aLStack128);
    uVar9 = lib::L2CValue::as_integer(aLStack144);
    fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar11);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_LADDER_WORK_INT_STICK_X);
      iVar5 = lib::L2CValue::as_integer(aLStack176);
      iVar5 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar5);
      lib::L2CValue::L2CValue(aLStack160,iVar5);
      lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack224,0x18504d5e6f);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      uVar9 = lib::L2CValue::as_integer(aLStack224);
      iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar7,uVar9);
      lib::L2CValue::L2CValue(aLStack192,iVar5);
      uVar7 = lib::L2CValue::operator_(aLStack192,aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_LADDER_FLAG_FALL);
        iVar5 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator_(aLStack96,aLStack80);
        goto LAB_7100043f0c;
      }
    }
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator_(pLVar8,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_LADDER_ATTACK);
      lib::L2CValue::operator_(aLStack96,aLStack80);
      goto LAB_7100043f0c;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_S);
    lib::L2CValue::operator_(aLStack96,aLStack80);
LAB_7100043f0c:
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_NONE);
  uVar7 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,aLStack96);
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60))
    ;
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_STATUS_KIND_LADDER);
    FUN_7100044720(this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LADDER);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x60))
    ;
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  lVar2 = -0x50;
LAB_7100043fec:
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
  return;
}

