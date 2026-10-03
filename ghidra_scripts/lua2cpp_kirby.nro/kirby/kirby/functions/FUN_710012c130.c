
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710012c130(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *this;
  bool bVar4;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue
            (aLStack96,_FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack64,0);
  uVar3 = lib::L2CValue::operator<(aLStack64,aLStack80);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar3 & 1) == 0) {
    lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) goto LAB_710012c2f0;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_SQUAT);
    lib::L2CValue::L2CValue(aLStack160,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x70,(L2CValue)0x60);
    lib::L2CValue::~L2CValue(aLStack160);
    this = aLStack144;
  }
  else {
    bVar1 = app::lua_bind::StopModule__is_stop_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack80);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_check_button_jump(param_2);
      lib::L2CValue::L2CValue(aLStack64,true);
      uVar3 = lib::L2CValue::operator==(aLStack96,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_SQUAT);
        lib::L2CValue::L2CValue(aLStack128,true);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::~L2CValue(aLStack128);
        this = aLStack112;
        goto LAB_710012c360;
      }
    }
LAB_710012c2f0:
    lua2cpp::L2CFighterCommon::sub_check_button_frick(param_2);
    lib::L2CValue::L2CValue(aLStack64,true);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      bVar4 = false;
      goto LAB_710012c378;
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KIRBY_STATUS_KIND_PICKEL_SPECIAL_N3_JUMP_SQUAT);
    lib::L2CValue::L2CValue(aLStack192,true);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
    lib::L2CValue::~L2CValue(aLStack192);
    this = aLStack176;
  }
LAB_710012c360:
  lib::L2CValue::~L2CValue(this);
  bVar4 = true;
LAB_710012c378:
  lib::L2CValue::L2CValue(param_1,bVar4);
  return;
}

