
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100008090(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
LAB_710000836c:
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_COPY_CHARA);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,iVar3);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_ROSETTA);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_INT_ROSETTA_SPECIAL_N_INTERVAL);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      lib::L2CValue::L2CValue(aLStack64,0);
      uVar4 = lib::L2CValue::operator<(aLStack64,aLStack96);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      }
      goto LAB_7100008378;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_PIT);
    uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_PITB);
      uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIND_INKLING);
        uVar4 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar4 & 1) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack112,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLOAT_INKLING_SPECIAL_N_INK);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack96,fVar5);
          lib::L2CValue::L2CValue(aLStack64,0.0);
          uVar4 = lib::L2CValue::operator<=(aLStack96,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar4 & 1) == 0) {
            lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          }
          else {
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          }
          goto LAB_7100008378;
        }
        goto LAB_710000836c;
      }
    }
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KIRBY_INSTANCE_WORK_ID_FLAG_COPY_STRANS_OFF);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
LAB_7100008378:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

