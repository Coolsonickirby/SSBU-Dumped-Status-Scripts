
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100021960(L2CValue *param_1,void *param_2,L2CValue *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  L2CValue *this;
  ulong uVar4;
  ulong uVar5;
  ulong *this_00;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  undefined8 uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  ulong auStack208 [2];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_PARAM_ID_HASH)
  ;
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_100);
  lVar3 = app::lua_bind::WorkModule__get_int64_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
  lib::L2CValue::L2CValue(aLStack96,lVar3);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_100,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator==(this,(L2CValue *)&local_100);
  lib::L2CValue::~L2CValue((L2CValue *)&local_100);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_FIGHTER_DEMON_STATUS_SPECIAL_LW_INT_CAPTURE_FRAME);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    iVar2 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
    lib::L2CValue::L2CValue(aLStack144,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,0x11753c19d4);
    uVar4 = lib::L2CValue::as_integer(aLStack96);
    uVar5 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::~L2CValue((L2CValue *)&local_100);
    uVar4 = lib::L2CValue::operator<=(aLStack160,aLStack144);
    if ((uVar4 & 1) == 0) {
      fVar6 = (float)app::lua_bind::MotionModule__frame_impl
                               (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
      lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar6);
      lib::L2CValue::L2CValue((L2CValue *)auStack208,0x1595b30dce);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer((L2CValue *)auStack208);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar2);
      uVar4 = lib::L2CValue::operator<=((L2CValue *)&local_50,(L2CValue *)&local_100);
      lib::L2CValue::~L2CValue((L2CValue *)&local_50);
      lib::L2CValue::~L2CValue((L2CValue *)auStack208);
      lib::L2CValue::~L2CValue((L2CValue *)&local_100);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack208);
        lib::L2CValue::L2CValue(aLStack224);
        uVar8 = app::lua_bind::PostureModule__pos_2d_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
        lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)uVar8);
        lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar8 >> 0x20));
        lib::L2CValue::operator=((L2CValue *)auStack208,(L2CValue *)&local_100);
        lib::L2CValue::operator=(aLStack224,aLStack240);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue((L2CValue *)&local_100);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,-1000.0);
        lib::L2CValue::L2CValue(aLStack320,false);
        uVar4 = lib::L2CValue::as_number((L2CValue *)auStack208);
        uVar7 = lib::L2CValue::as_number(aLStack224);
        local_100 = uVar4 & 0xffffffff | (ulong)uVar7 << 0x20;
        uStack248 = 0;
        uVar4 = lib::L2CValue::as_number(aLStack288);
        uVar7 = lib::L2CValue::as_number(aLStack304);
        local_50 = uVar4 & 0xffffffff | (ulong)uVar7 << 0x20;
        uStack72 = 0;
        bVar1 = lib::L2CValue::as_bool(aLStack320);
        bVar1 = app::lua_bind::GroundModule__ray_check_impl
                          (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),
                           (Vector2f *)&local_100,(Vector2f *)&local_50,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
        bVar1 = lib::L2CValue::as_bool(aLStack272);
        app::lua_bind::GroundModule__set_passable_check_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack320);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::~L2CValue(aLStack224);
        this_00 = auStack208;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_100,false);
        bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_100);
        app::lua_bind::GroundModule__set_passable_check_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),(bool)(bVar1 & 1));
        this_00 = &local_100;
      }
      lib::L2CValue::~L2CValue((L2CValue *)this_00);
      lib::L2CValue::L2CValue(param_1,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_CAPTURE_JUMP);
      lib::L2CValue::L2CValue(aLStack192,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::L2CValue(param_1,true);
    }
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,param_3);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::L2CValue(param_1,true);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

