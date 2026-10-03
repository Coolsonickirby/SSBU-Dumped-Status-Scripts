
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710002cca0(L2CValue *param_1,void *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  L2CValue *this;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_710002cfe0(aLStack64);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_APPEAL);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_DAMAGE_PARENT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_CATCH_PARENT);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack64);
        if ((bVar1 & 1U) == 0) {
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack176,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_FLAG_FOLLOW_SYNC_MOTION_PARENT
                    );
          iVar3 = lib::L2CValue::as_integer(aLStack176);
          bVar2 = app::lua_bind::WorkModule__is_flag_impl
                            (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar3);
          lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((bVar1 & 1U) != 0) {
            lib::L2CValue::L2CValue(aLStack192,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_HAPPY);
            lib::L2CValue::L2CValue(aLStack208,false);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
            lib::L2CValue::~L2CValue(aLStack208);
            this = aLStack192;
            goto LAB_710002cdf8;
          }
        }
        iVar3 = 0;
        goto LAB_710002ce04;
      }
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_WORRY);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x80,(L2CValue)0x70);
      lib::L2CValue::~L2CValue(aLStack144);
      this = aLStack128;
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_ROSETTA_TICO_STATUS_KIND_FOLLOW_APPEAL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::~L2CValue(aLStack112);
      this = aLStack96;
    }
LAB_710002cdf8:
    lib::L2CValue::~L2CValue(this);
  }
  iVar3 = 1;
LAB_710002ce04:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

