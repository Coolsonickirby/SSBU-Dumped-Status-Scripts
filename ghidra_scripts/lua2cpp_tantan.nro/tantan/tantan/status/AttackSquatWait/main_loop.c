
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterTantan::status::AttackSquatWait_main_loop(L2CFighterTantan *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  ulong uVar6;
  Hash40 HVar7;
  float fVar8;
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
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    FUN_71000442a0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_squat_common_Main(this);
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
        FUN_7100044720(this,aLStack80);
        goto LAB_710005b058;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100044bd0(aLStack96,this,aLStack112,aLStack128);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      FUN_710005a330(aLStack96,this);
      lib::L2CValue::L2CValue(aLStack80,true);
      uVar5 = lib::L2CValue::operator__(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar5 & 1) == 0) {
        FUN_710004c020(this);
        lib::L2CValue::L2CValue(aLStack144,false);
        lib::L2CValue::L2CValue(aLStack160,false);
        FUN_710004c370(aLStack96,this,aLStack144,aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        FUN_710005abc0(aLStack176,this);
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar5 = lib::L2CValue::operator__(aLStack176,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar5 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_SQUAT_RV);
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          bVar2 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                            (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((bVar1 & 1U) != 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
            lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
            lib::L2CValue::L2CValue(aLStack208,0xd87461d6d);
            uVar5 = lib::L2CValue::as_integer(aLStack192);
            uVar6 = lib::L2CValue::as_integer(aLStack208);
            fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                     (this->moduleAccessor,uVar5,uVar6);
            lib::L2CValue::L2CValue(aLStack176,fVar8);
            uVar5 = lib::L2CValue::operator_(aLStack176,pLVar4);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue
                        (aLStack240,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME);
              iVar3 = lib::L2CValue::as_integer(aLStack240);
              iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack224,iVar3);
              lib::L2CValue::L2CValue(aLStack80,0);
              uVar5 = lib::L2CValue::operator_(aLStack80,aLStack224);
              lib::L2CValue::_L2CValue(aLStack80);
              lib::L2CValue::_L2CValue(aLStack224);
              lib::L2CValue::_L2CValue(aLStack240);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
              if ((uVar5 & 1) == 0) goto LAB_710005b404;
            }
            else {
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack208);
              lib::L2CValue::_L2CValue(aLStack192);
            }
            lib::L2CValue::L2CValue
                      (aLStack80,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_CLEAR_COMMAND_MOVE);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_SQUAT_RV);
            lib::L2CValue::L2CValue(aLStack176,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x50);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack80);
            iVar3 = 1;
            goto LAB_710005b218;
          }
LAB_710005b404:
          lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_SQUAT_FLAG_ENABLE_PASS);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack192);
          }
          else {
            lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_SQUAT_WORK_INT_FRAME);
            iVar3 = lib::L2CValue::as_integer(aLStack224);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack208,iVar3);
            lib::L2CValue::L2CValue(aLStack80,0);
            uVar5 = lib::L2CValue::operator__(aLStack208,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            lib::L2CValue::_L2CValue(aLStack208);
            lib::L2CValue::_L2CValue(aLStack224);
            lib::L2CValue::_L2CValue(aLStack176);
            lib::L2CValue::_L2CValue(aLStack192);
            if ((uVar5 & 1) != 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
              lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
              uVar5 = lib::L2CValue::operator__(pLVar4,aLStack80);
              lib::L2CValue::_L2CValue(aLStack80);
              if ((uVar5 & 1) != 0) {
                FUN_710005b770(this);
                goto LAB_710005b210;
              }
            }
          }
          FUN_7100022710(aLStack176,this);
          HVar7 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack192,HVar7);
          lib::L2CValue::L2CValue(aLStack208,0x16f61e9818);
          lib::L2CValue::L2CValue(aLStack224,0x1c3422ce2f);
          FUN_710004ebd0(aLStack80,this,aLStack176,aLStack192,aLStack208,aLStack224);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack224);
          lib::L2CValue::_L2CValue(aLStack208);
          lib::L2CValue::_L2CValue(aLStack192);
          pLVar4 = aLStack176;
          goto LAB_710005b05c;
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_TANTAN_STATUS_KIND_ATTACK_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
LAB_710005b058:
    pLVar4 = aLStack80;
LAB_710005b05c:
    lib::L2CValue::_L2CValue(pLVar4);
  }
LAB_710005b210:
  iVar3 = 0;
LAB_710005b218:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

