
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005d640(L2CValue *param_1,L2CFighterCommon *param_2)

{
  byte bVar1;
  int iVar2;
  L2CValue *this;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2->globalTable,10);
  iVar2 = lib::L2CValue::as_integer(this);
  bVar1 = app::FighterSpecializer_Tantan::is_status_kind_attack(iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    lVar4 = app::lua_bind::WorkModule__get_int64_impl(param_2->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack80,lVar4);
    lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_INSTANCE_WORK_ID_FLAG_ATTACK_LONG_L);
      iVar2 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,(L2CValue *)&FIGHTER_STATUS_CATCHED_RIDLEY_WORK_FLOAT_INIT_OFFSET_X);
        lua2cpp::L2CFighterCommon::sub_GetLightItemImm(param_2,(L2CValue)0x90);
        lib::L2CValue::~L2CValue(aLStack112);
        iVar2 = app::lua_bind::StatusModule__status_kind_que_from_script_impl
                          (param_2->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack80,iVar2);
        lib::L2CValue::L2CValue(aLStack64,_STATUS_KIND_NONE);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          bVar5 = true;
          goto LAB_710005d7fc;
        }
      }
    }
  }
  bVar5 = false;
LAB_710005d7fc:
  lib::L2CValue::L2CValue(param_1,bVar5);
  return;
}

