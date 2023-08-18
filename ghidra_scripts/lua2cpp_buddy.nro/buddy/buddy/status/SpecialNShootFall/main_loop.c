
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootFall_main_loop(L2CFighterBuddy *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    iVar3 = 1;
    goto LAB_7100029920;
  }
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_END);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_END);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      goto LAB_7100029908;
    }
    FUN_7100028bd0(aLStack80,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack80,FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4);
      lib::L2CValue::operator_(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        lib::L2CValue::operator_(aLStack128);
        lib::L2CValue::operator_(pLVar4,aLStack112);
        lib::L2CValue::L2CValue(aLStack80,0.0);
        uVar5 = lib::L2CValue::operator_(aLStack80,aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
        }
        else {
          FUN_7100027da0(aLStack80,this);
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack128);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_BUDDY_STATUS_SPECIAL_N_FLAG_PRECEDE_SHOOT_TURN);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR_TURN);
            lib::L2CValue::L2CValue(aLStack96,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            goto LAB_7100029908;
          }
        }
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::operator_(pLVar4,aLStack96);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0xcee0a3848);
      uVar5 = lib::L2CValue::as_integer(aLStack128);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar5,uVar6);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      uVar5 = lib::L2CValue::operator__(aLStack80,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        FUN_7100027da0(aLStack80,this);
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR_TURN);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          goto LAB_7100029908;
        }
      }
      FUN_71000285f0(aLStack80,this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_AIR);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        goto LAB_7100029908;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_N_SHOOT_LANDING);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100029908:
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  iVar3 = 0;
LAB_7100029920:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

