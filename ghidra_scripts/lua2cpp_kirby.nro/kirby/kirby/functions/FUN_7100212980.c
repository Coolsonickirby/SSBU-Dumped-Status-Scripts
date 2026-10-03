
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100212980(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_STATUS_SPECIAL_N_WORK_INT_CANCEL_TYPE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE);
  uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_F);
    uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE_B);
      uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_GUARD);
        uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_JUMP);
          uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar2 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_AIR_ESCAPE_AIR);
            uVar2 = lib::L2CValue::operator==(aLStack96,aLStack80);
            lib::L2CValue::~L2CValue(aLStack80);
            if ((uVar2 & 1) == 0) {
              pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
              lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
              uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
              lib::L2CValue::~L2CValue(aLStack80);
              if ((uVar2 & 1) == 0) {
                pLVar3 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
                lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
                uVar2 = lib::L2CValue::operator==(pLVar3,aLStack80);
                lib::L2CValue::~L2CValue(aLStack80);
                if ((uVar2 & 1) == 0) {
                  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
                }
                else {
                  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
                  lib::L2CValue::L2CValue(aLStack112,false);
                  lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
                  lib::L2CValue::~L2CValue(aLStack112);
                  lib::L2CValue::~L2CValue(aLStack80);
                  lib::L2CValue::L2CValue((L2CValue *)return_value,1);
                }
              }
              else {
                lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FALL);
                lib::L2CValue::L2CValue(aLStack112,false);
                lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
                lib::L2CValue::~L2CValue(aLStack112);
                lib::L2CValue::~L2CValue(aLStack80);
                lib::L2CValue::L2CValue((L2CValue *)return_value,1);
              }
            }
            else {
              lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_AIR);
              lib::L2CValue::L2CValue(aLStack112,true);
              lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
              lib::L2CValue::~L2CValue(aLStack112);
              lib::L2CValue::~L2CValue(aLStack80);
              lib::L2CValue::L2CValue((L2CValue *)return_value,1);
            }
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_JUMP_SQUAT);
            lib::L2CValue::L2CValue(aLStack112,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          }
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_GUARD_ON);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE_B);
        lib::L2CValue::L2CValue(aLStack112,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_ESCAPE_F);
      lib::L2CValue::L2CValue(aLStack112,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_ESCAPE);
    lib::L2CValue::L2CValue(aLStack112,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

