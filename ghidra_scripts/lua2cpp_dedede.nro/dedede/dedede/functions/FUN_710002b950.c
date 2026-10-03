
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710002b950(L2CFighterDedede *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DEDEDE_STATUS_SPECIAL_N_FLAG_CONTINUE_MOT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    FUN_710002bc70(this);
    lib::L2CValue::L2CValue(aLStack80,FUN_710002c1a0);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
    lib::L2CValue::~L2CValue(aLStack80);
    goto LAB_710002bbb8;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::operator=(aLStack112,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar4 = lib::L2CValue::operator==(aLStack128,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack128);
  if ((uVar4 & 1) != 0) {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack112,aLStack80);
        goto LAB_710002bb90;
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator==(pLVar5,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,true);
        lib::L2CValue::operator=(aLStack112,aLStack80);
LAB_710002bb90:
        lib::L2CValue::~L2CValue(aLStack80);
      }
    }
  }
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) != 0) {
    FUN_710002b420(this);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710002bbb8:
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

