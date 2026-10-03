
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000f560(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
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
    if ((uVar5 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_2);
      uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar5 & 1) == 0) {
        pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_SQUAT_3);
        uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar4 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,9);
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_SQUAT_TURN_AUTO);
          uVar5 = lib::L2CValue::operator==(pLVar4,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_STAND);
            iVar3 = lib::L2CValue::as_integer(aLStack96);
            bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl
                              (this->moduleAccessor,iVar3);
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
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PAD_CMD_CAT4_FLAG_COMMAND_3);
                lib::L2CValue::operator&(pLVar4,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
                lib::L2CValue::~L2CValue(aLStack96);
                if ((bVar2 & 1U) == 0) goto LAB_710000f84c;
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEMON_STATUS_KIND_ATTACK_STAND_3);
                lib::L2CValue::L2CValue(aLStack96,true);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
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
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack80);
              bVar2 = true;
              goto LAB_710000f854;
            }
          }
        }
      }
    }
  }
LAB_710000f84c:
  bVar2 = false;
LAB_710000f854:
  lib::L2CValue::L2CValue((L2CValue *)return_value,bVar2);
  return;
}

