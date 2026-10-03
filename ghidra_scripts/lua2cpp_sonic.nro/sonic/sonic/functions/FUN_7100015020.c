
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100015020(L2CValue *param_1,L2CFighterCommon *param_2)

{
  L2CValue *this;
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
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
  
  this = &param_2->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) goto LAB_7100015320;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
  lib::L2CValue::operator&(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_S_DASH);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,CONTROL_PAD_BUTTON_SPECIAL);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                          (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack176,_FIGHTER_SONIC_STATUS_KIND_SPIN_JUMP);
          lib::L2CValue::L2CValue(aLStack192,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack176);
          goto LAB_7100015344;
        }
      }
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x20);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::~L2CValue(aLStack96);
      }
      else {
        bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SONIC_STATUS_KIND_SPIN_JUMP);
          lib::L2CValue::L2CValue(aLStack224,true);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x30,(L2CValue)0x20);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          goto LAB_7100015344;
        }
      }
LAB_7100015320:
      lua2cpp::L2CFighterCommon::sub_transition_group_check_air_jump_aerial(param_2);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack96,_CONTROL_PAD_BUTTON_ATTACK);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl
                            (param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          if ((bVar1 & 1U) == 0) {
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
          }
          else {
            lib::L2CValue::L2CValue(aLStack256,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
            iVar3 = lib::L2CValue::as_integer(aLStack256);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack240,iVar3);
            lib::L2CValue::L2CValue(aLStack288,_FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT_MAX);
            iVar3 = lib::L2CValue::as_integer(aLStack288);
            iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack272,iVar3);
            uVar5 = lib::L2CValue::operator<(aLStack240,aLStack272);
            lib::L2CValue::~L2CValue(aLStack272);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::~L2CValue(aLStack240);
            lib::L2CValue::~L2CValue(aLStack256);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((uVar5 & 1) != 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,10);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SONIC_STATUS_KIND_SPECIAL_LW_HOLD);
              uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar5 & 1) != 0) {
                pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0xe);
                lib::L2CValue::L2CValue(aLStack80,0);
                uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                if ((uVar5 & 1) != 0) {
                  app::lua_bind::KineticModule__clear_speed_all_impl(param_2->moduleAccessor);
                }
              }
              lib::L2CValue::L2CValue(aLStack304,FIGHTER_STATUS_KIND_JUMP_AERIAL);
              lib::L2CValue::L2CValue(aLStack320,true);
              lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xd0,(L2CValue)0xc0);
              lib::L2CValue::~L2CValue(aLStack320);
              lib::L2CValue::~L2CValue(aLStack304);
              goto LAB_7100015344;
            }
          }
        }
        iVar3 = 0;
        goto LAB_710001552c;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SONIC_STATUS_KIND_SPIN_JUMP);
      lib::L2CValue::L2CValue(aLStack160,true);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack144);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SONIC_STATUS_KIND_SPIN_JUMP);
    lib::L2CValue::L2CValue(aLStack128,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
  }
LAB_7100015344:
  iVar3 = 1;
LAB_710001552c:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

