
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000e220(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_SQUAT_WAIT);
  uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_1);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_710000e374;
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_2);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_710000e374;
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_3);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_710000e374;
    pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_SQUAT_TURN_AUTO);
    uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) != 0) goto LAB_710000e374;
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_STAND);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_1);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_7);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_4);
          lib::L2CValue::operator&(pLVar4,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar2 & 1U) == 0) {
            pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_9);
            lib::L2CValue::operator&(pLVar4,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
            lib::L2CValue::~L2CValue(aLStack96);
            if ((bVar2 & 1U) == 0) {
              pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_3);
              lib::L2CValue::operator&(pLVar4,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              if ((bVar2 & 1U) == 0) goto LAB_710000ea60;
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_3);
              lib::L2CValue::L2CValue(aLStack96,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_2);
              lib::L2CValue::L2CValue(aLStack96,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
            }
          }
          else {
            lib::L2CValue::L2CValue
                      (aLStack80,
                       _FIGHTER_DEMON_INSTANCE_WORK_ID_INT_ATTACK_STAND_TURN_FRAME_COMMAND_4);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT4_COMMAND_4);
            iVar3 = lib::L2CValue::as_integer(aLStack112);
            fVar6 = (float)app::lua_bind::FighterControlModuleImpl__get_special_command_lr_impl
                                     (this->moduleAccessor,iVar3);
            lib::L2CValue::L2CValue(aLStack96,fVar6);
            lib::L2CValue::L2CValue(aLStack128,false);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack80);
            bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((bVar2 & 1U) != 0) {
              app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
              FUN_7100010670(this);
            }
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_5);
            lib::L2CValue::L2CValue(aLStack96,true);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          }
        }
        else {
          FUN_71000107d0(aLStack80,this);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar2 & 1U) != 0) {
            app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
            FUN_7100010670(this);
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_6);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
      else {
        FUN_71000105a0(aLStack80,this);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
          FUN_7100010670(this);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_4);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      goto LAB_710000e670;
    }
LAB_710000ea60:
    bVar2 = false;
  }
  else {
LAB_710000e374:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_SQUAT);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
LAB_710000e540:
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_7);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_9);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) goto LAB_710000ea60;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_2);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        FUN_71000107d0(aLStack80,this);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          app::lua_bind::PostureModule__reverse_lr_impl(this->moduleAccessor);
          FUN_7100010670(this);
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_6);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_3);
      lib::L2CValue::operator&(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_2);
        lib::L2CValue::operator&(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar2 & 1U) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x23);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_1);
          lib::L2CValue::operator&(pLVar4,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((bVar2 & 1U) == 0) goto LAB_710000e540;
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_3);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_2);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_1);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
LAB_710000e670:
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack80);
    bVar2 = true;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar2);
  return;
}

