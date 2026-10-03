
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710001c040(L2CValue *param_1,void *param_2,L2CValue *param_3,L2CValue *param_4,
                   L2CValue *param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue *this;
  float fVar5;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack96,0);
  fVar5 = (float)app::lua_bind::MotionModule__frame_impl
                           (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
  lib::L2CValue::L2CValue(aLStack80,fVar5);
  lib::L2CValue::operator=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  uVar3 = lib::L2CValue::operator<=(param_4,aLStack96);
  if (((uVar3 & 1) != 0) && (uVar3 = lib::L2CValue::operator<=(aLStack96,param_5), (uVar3 & 1) != 0)
     ) {
    lib::L2CValue::L2CValue(aLStack112,param_3);
    FUN_710001c380(aLStack80,param_2,aLStack112);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHEIK_STATUS_SPECIAL_LW_WORK_INT_WALL_JUMP_NUM);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      iVar2 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
      lib::L2CValue::L2CValue(aLStack80,iVar2);
      lib::L2CValue::L2CValue(aLStack160,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack176,0xd04602944);
      uVar3 = lib::L2CValue::as_integer(aLStack160);
      uVar4 = lib::L2CValue::as_integer(aLStack176);
      iVar2 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),uVar3,uVar4);
      lib::L2CValue::L2CValue(aLStack144,iVar2);
      uVar3 = lib::L2CValue::operator<(aLStack80,aLStack144);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar3 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_STATUS_SPECIAL_LW_WORK_INT_WALL_JUMP_NUM);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__inc_int_impl
                  (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40),iVar2);
        lib::L2CValue::~L2CValue(aLStack80);
        this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)((long)param_2 + 200),9);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_LW_RETURN);
        uVar3 = lib::L2CValue::operator==(this,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) != 0) {
          app::lua_bind::PostureModule__reverse_lr_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
          app::lua_bind::PostureModule__update_rot_y_lr_impl
                    (*(BattleObjectModuleAccessor **)((long)param_2 + 0x40));
        }
        lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SHEIK_STATUS_KIND_SPECIAL_LW_RETURN);
        lib::L2CValue::L2CValue(aLStack208,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x40,(L2CValue)0x30);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710001c294;
      }
    }
  }
  lib::L2CValue::L2CValue(param_1,0);
LAB_710001c294:
  lib::L2CValue::~L2CValue(aLStack96);
  return;
}

