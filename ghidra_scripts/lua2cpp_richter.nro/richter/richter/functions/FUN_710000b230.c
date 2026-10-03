
void FUN_710000b230(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
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
  
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xc3a4e2597);
  uVar2 = lib::L2CValue::operator==(param_3,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar2 & 1) != 0) goto LAB_710000b784;
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack96,0x1b58090dac);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack112,0x1b640432f5);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack128,0x1b1c486659);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xdf05c072b);
  lib::L2CValue::L2CValue(aLStack144,0x1b20455900);
  pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&stack0xffffffffffffffc0);
  uVar2 = lib::L2CValue::as_integer(aLStack144);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40),(ulong)pLVar4,uVar2);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  fVar5 = (float)app::lua_bind::ControlModule__get_attack_air_stick_dir_impl
                           (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,fVar5);
  lib::L2CAgent::math_deg((L2CAgent *)&stack0xffffffffffffffc0,pLVar4);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xc3495ada5);
  uVar2 = lib::L2CValue::operator==(param_3,(L2CValue *)&stack0xffffffffffffffc0);
  lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xc33f869bc);
    uVar2 = lib::L2CValue::operator==(param_3,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar2 & 1) != 0) goto LAB_710000b4ac;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xdde67d935);
    uVar2 = lib::L2CValue::operator==(param_3,(L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xd40042152);
      uVar2 = lib::L2CValue::operator==(param_3,(L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = lib::L2CValue::operator<=(aLStack112,aLStack144), (uVar2 & 1) != 0)) {
        lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,true);
        lib::L2CValue::operator=(aLStack176,(L2CValue *)&stack0xffffffffffffffc0);
        goto LAB_710000b5b8;
      }
      goto LAB_710000b5c0;
    }
    uVar2 = lib::L2CValue::operator<=(aLStack144,aLStack96);
    if ((uVar2 & 1) == 0) goto LAB_710000b5c0;
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,true);
    lib::L2CValue::operator=(aLStack160,(L2CValue *)&stack0xffffffffffffffc0);
LAB_710000b5b8:
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  }
  else {
LAB_710000b4ac:
    uVar2 = lib::L2CValue::operator<=(aLStack80,aLStack144);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,true);
      lib::L2CValue::operator=(aLStack160,(L2CValue *)&stack0xffffffffffffffc0);
      goto LAB_710000b5b8;
    }
    uVar2 = lib::L2CValue::operator<=(aLStack144,aLStack128);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,true);
      lib::L2CValue::operator=(aLStack176,(L2CValue *)&stack0xffffffffffffffc0);
      goto LAB_710000b5b8;
    }
  }
LAB_710000b5c0:
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack160);
  if ((bVar1 & 1U) == 0) {
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack176);
    if ((bVar1 & 1U) != 0) {
      fVar5 = (float)app::lua_bind::ControlModule__get_attack_air_stick_x_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack208,fVar5);
      fVar5 = (float)app::lua_bind::PostureModule__lr_impl
                               (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
      lib::L2CValue::L2CValue(aLStack224,fVar5);
      lib::L2CValue::operator*(aLStack208,aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
      uVar2 = lib::L2CValue::operator<((L2CValue *)&stack0xffffffffffffffc0,aLStack192);
      lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack208);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xf5495dd2c);
        lib::L2CValue::operator=(param_3,(L2CValue *)&stack0xffffffffffffffc0);
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xfdbf74a7b);
        lib::L2CValue::operator=(param_3,(L2CValue *)&stack0xffffffffffffffc0);
      }
      goto LAB_710000b744;
    }
  }
  else {
    fVar5 = (float)app::lua_bind::ControlModule__get_attack_air_stick_x_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack208,fVar5);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl
                             (*(BattleObjectModuleAccessor **)(param_2 + 0x40));
    lib::L2CValue::L2CValue(aLStack224,fVar5);
    lib::L2CValue::operator*(aLStack208,aLStack224);
    lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0.0);
    uVar2 = lib::L2CValue::operator<((L2CValue *)&stack0xffffffffffffffc0,aLStack192);
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack208);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xfcaf6254b);
      lib::L2CValue::operator=(param_3,(L2CValue *)&stack0xffffffffffffffc0);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&stack0xffffffffffffffc0,0xf4594b21c);
      lib::L2CValue::operator=(param_3,(L2CValue *)&stack0xffffffffffffffc0);
    }
LAB_710000b744:
    lib::L2CValue::~L2CValue((L2CValue *)&stack0xffffffffffffffc0);
  }
  lib::L2CValue::~L2CValue(aLStack176);
  lib::L2CValue::~L2CValue(aLStack160);
  lib::L2CValue::~L2CValue(aLStack144);
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
LAB_710000b784:
  lib::L2CValue::L2CValue(param_1,param_3);
  return;
}

